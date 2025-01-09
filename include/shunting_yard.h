//
// Created by Arwed on 1/9/2025.
//

#ifndef SHUNTING_YARD_H
#define SHUNTING_YARD_H
#include <string>
#include <utility>
#include <unordered_map>
#include <deque>
#include <vector>
#include <cstdint>

struct sOperator {
    uint8_t precedence = 0;
    uint8_t arguments = 0;
};

struct sSymbol {
    std::string symbol;
    enum class Type: uint8_t {
        UNKNOWN,
        LITERAL_NUMERIC,
        OPERATOR,
        PARANTHESIS_OPEN,
        PARANTHESIS_CLOSE
    } type = Type::UNKNOWN;

    sOperator op;
};

class shunting_yard {
public:
    explicit shunting_yard(std::string expression);
    double calculate(double x);
private:
    std::unordered_map<char, sOperator> mapOps = {
        {'^',{4,2}},
        {'/',{3,2}},
        {'*',{3,2}},
        {'-',{2,2}},
        {'+',{2,2}}};

};

inline std::deque<sSymbol> stkOutput;



#endif //SHUNTING_YARD_H
