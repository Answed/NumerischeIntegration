//
// Created by Arwed on 1/9/2025.
// reference: https://www.youtube.com/watch?v=unh6aK8WMwM
// The Code from the Video is the base for this code. I implemented:
// - mutliple digit numbers, angle functions (sin, cos, tan), power and root operator, log and ln operator,
// pi and e functions, and the possibility to use variables.
//

#include "shunting_yard.h"

shunting_yard::shunting_yard(std::string expression)
{
    std::deque<sSymbol> stkHolding;

    sSymbol symPrevious = {"0", sSymbol::Type::LITERAL_NUMERIC, 0, 0};
    int pass = 0; // To catch uniary operators at the beginning of the expression

    for (const char c : expression)
    {
        if (std::isdigit(c))
        {
            stkOutput.push_back({std::string(1, c), sSymbol::Type::LITERAL_NUMERIC});
            symPrevious = stkOutput.back();
        }
        else if (c == '(')
        {
            stkHolding.push_front({std::string(1, c), sSymbol::Type::PARANTHESIS_OPEN});
            symPrevious = stkHolding.front();
        }
        else if (c == ')')
        {
            while (!stkHolding.empty() && stkHolding.front().type != sSymbol::Type::PARANTHESIS_OPEN)
            {
                stkOutput.push_back(stkHolding.front());
                stkHolding.pop_front();
            }

            if (stkHolding.empty())
                //TODO: handle mismatched paranthesis
                return;
            if (!stkHolding.empty() && stkHolding.front().type == sSymbol::Type::PARANTHESIS_OPEN)
                stkHolding.pop_front();

            symPrevious = {std::string(1, c), sSymbol::Type::PARANTHESIS_CLOSE};
        }
        else if (mapOps.contains(c))
        {
            sOperator new_op = mapOps[c];

            if (c == '-' || c == '+')
            {
                if ((symPrevious.type != sSymbol::Type::LITERAL_NUMERIC && symPrevious.type != sSymbol::Type::PARANTHESIS_CLOSE) || pass == 0)
                {
                    new_op.precedence = 100; //TODO change value to a fitting value for unary operators
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
            stkHolding.push_front({std::string(1, c), sSymbol::Type::OPERATOR, new_op})
            symPrevious = stkHolding.front();
        }
        else
        {
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
            case sSymbol::Type::OPERATOR:
                std::vector<double> mem(inst.op.arguments);
                for (uint8_t a = 0; a < inst.op.arguments; a++)
                {
                    mem[a] = stkSolve[0];
                    stkSolve.pop_front();
                }
                double result = 0;
                if (inst.op.arguments == 2)
                {
                    if (inst.symbol[0] == '/') result = mem[1] / mem[0];
                    if (inst.symbol[0] == '*') result = mem[1] * mem[0];
                    if (inst.symbol[0] == '-') result = mem[1] - mem[0];
                    if (inst.symbol[0] == '+') result = mem[1] + mem[0];
                }

                if (inst.op.arguments == 1)
                {
                    if (inst.symbol[0] == '-') result = -mem[0];
                    if (inst.symbol[0] == '+') result = mem[0];
                }

                stkSolve.push_front(result);
            default: break;
        }
    }
}
