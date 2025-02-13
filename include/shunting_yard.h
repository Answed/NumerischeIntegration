//
// Created by Arwed on 1/9/2025.
// reference: https://en.wikipedia.org/wiki/Shunting-yard_algorithm
//

#ifndef SHUNTING_YARD_H
#define SHUNTING_YARD_H
#include <string>
#include <utility>
#include <unordered_map>
#include <deque>
#include <vector>
#include <cstdint>
#include <math.h>

struct sOperator {
    uint8_t precedence = 0;
    uint8_t arguments = 0;
};

struct sSymbol {
    std::string symbol;
    enum class Type: uint8_t {
        UNKNOWN,
        LITERAL_NUMERIC,
        CHARACTER,
        VARIABLE,
        OPERATOR,
        PARANTHESIS_OPEN,
        PARANTHESIS_CLOSE,
        EULER_NUMBER,
        PI_NUMBER
    } type = Type::UNKNOWN;

    sOperator op;
};

class shunting_yard {
public:
    explicit shunting_yard(const std::string& expression);
    std::string getOutput();
    double calculate(double x, double y);
private:
    std::unordered_map<std::string, sOperator> mapOps = {
        {"^",{4,2}},
        {"sin",{4,1}},
        {"cos",{4,1}},
        {"tan",{4,1}},
        {"log",{4,1}},
        {"ln",{4,1}},
        {"sqrt", {4,1}},
        {"asin",{4,1}},
        {"acos",{4,1}},
        {"atan",{4,1}},
        {"cbrt", {4,1}},
        {"/",{3,2}},
        {"*",{3,2}},
        {"-",{2,2}},
        {"+",{2,2}}};
    std::deque<sSymbol> stkOutput;
};

#endif //SHUNTING_YARD_H
