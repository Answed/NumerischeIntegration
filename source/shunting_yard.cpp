//
// Created by Arwed on 1/9/2025.
//

#include "shunting_yard.h"

shunting_yard::shunting_yard(const std::string& expression)
{
    std::deque<sSymbol> stkHolding;
    std::string holding;
    sSymbol symPrevious = {"0", sSymbol::Type::LITERAL_NUMERIC, 0, 0};
    int pass = 0; // To catch uniary operators at the beginning of the expression

    for (const char c : expression)
    {
        if (c == '(')
        {
            if (symPrevious.type == sSymbol::Type::LITERAL_NUMERIC && !holding.empty())
            {
                stkOutput.push_front({holding, sSymbol::Type::LITERAL_NUMERIC});
                holding.clear();
            }
            stkHolding.push_front({std::string(1, c), sSymbol::Type::PARANTHESIS_OPEN});
            symPrevious = stkHolding.front();
        }
        else if (c == ')')
        {

            if (symPrevious.type == sSymbol::Type::LITERAL_NUMERIC && !holding.empty())
            {
                stkOutput.push_front({holding, sSymbol::Type::LITERAL_NUMERIC});
                holding.clear();
            }
            while (!stkHolding.empty() && stkHolding.front().type != sSymbol::Type::PARANTHESIS_OPEN)
            {
                stkOutput.push_back(stkHolding.front());
                stkHolding.pop_front();
            }

            if (stkHolding.empty())
                //TODO: handle mismatched parenthesis
                return;
            if (!stkHolding.empty() && stkHolding.front().type == sSymbol::Type::PARANTHESIS_OPEN)
                stkHolding.pop_front();

            symPrevious = {std::string(1, c), sSymbol::Type::PARANTHESIS_CLOSE};
        }
        else if (mapOps.contains(holding))
        {
            sOperator new_op = mapOps[holding];
            holding.clear();
            if (c == '-' || c == '+')
            {
                if ((symPrevious.type != sSymbol::Type::LITERAL_NUMERIC && symPrevious.type != sSymbol::Type::PARANTHESIS_CLOSE) || pass == 0)
                {
                    new_op.precedence = 5;
                    new_op.arguments = 1;
                }
            }

            while (!stkHolding.empty() && stkHolding.front().type != sSymbol::Type::PARANTHESIS_OPEN)
            {
                if (stkHolding.front().type != sSymbol::Type::OPERATOR)
                {
                    const auto& holding_stack_op = stkHolding.front().op;
                    if (holding_stack_op.precedence >= new_op.precedence)
                    {
                        stkOutput.push_back(stkHolding.front());
                        stkHolding.pop_front();
                    }
                    else
                        break;
                }
            }
            stkHolding.push_front({std::string(1, c), sSymbol::Type::OPERATOR, new_op});
            symPrevious = stkHolding.front();
        }
        else
        {
            if (std::isdigit(c))
            {
                holding += c;
                symPrevious = {std::string(1, c), sSymbol::Type::LITERAL_NUMERIC};
            }
            else if (c=='e')
            {
                stkOutput.push_front({"2.71828182845904523536028747135266249775724709369995", sSymbol::Type::EULER_NUMBER});
                symPrevious = stkOutput.front();
            }
            else if(c=='p')
            {
                stkOutput.push_front({"3.14159265358979323846264338327950288419716939937510", sSymbol::Type::PI_NUMBER});
                symPrevious = stkOutput.front();
            }
            else if (c==' ')
                continue;
            else if (c == 'x')
            {
                stkOutput.push_front({"x", sSymbol::Type::VARIABLE});
                symPrevious = stkOutput.front();
            }
            else
            {
                holding += c;
                symPrevious = {std::string(1, c), sSymbol::Type::CHARACTER};
            }

            //TODO: handle unknown symbol
        }
        pass++;
    }

    while (!stkHolding.empty())
    {
        stkOutput.push_back(stkHolding.front());
        stkHolding.pop_front();
    }
}

double shunting_yard::calculate(double x)
{
    std::deque<double> stkSolve;
    for (const auto& inst : stkOutput)
        {
        switch (inst.type)
            {
            case sSymbol::Type::LITERAL_NUMERIC:
                stkSolve.push_front(std::stod(inst.symbol));
                break;
            case sSymbol::Type::VARIABLE:
                stkSolve.push_front(x);
                break;
            case sSymbol::Type::OPERATOR:
            {
                std::vector<double> mem(inst.op.arguments);
                for (uint8_t a = 0; a < inst.op.arguments; a++)
                {
                    mem[a] = stkSolve[0];
                    stkSolve.pop_front();
                }
                double result = 0;
                if (inst.op.arguments == 2)
                {
                    if (inst.symbol == "^") result =  pow(mem[1], mem[0]);
                    if (inst.symbol == "/") result = mem[1] / mem[0];
                    if (inst.symbol == "*") result = mem[1] * mem[0];
                    if (inst.symbol == "-") result = mem[1] - mem[0];
                    if (inst.symbol == "+") result = mem[1] + mem[0];
                }

                if (inst.op.arguments == 1)
                {
                    if (inst.symbol == "sin") result = sin(mem[0]);
                    if (inst.symbol == "cos") result = cos(mem[0]);
                    if (inst.symbol == "tan") result = tan(mem[0]);
                    if (inst.symbol == "log") result = log10(mem[0]);
                    if (inst.symbol == "ln") result = log(mem[0]);
                    if (inst.symbol == "sqrt") result = sqrt(mem[0]);
                    if (inst.symbol == "-") result = -mem[0];
                    if (inst.symbol == "+") result = mem[0];
                }

                stkSolve.push_front(result);
                break;
            }
            default:
                break;
        }
    }
}
