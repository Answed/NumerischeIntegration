//
// Created by Arwed on 1/7/2025.
//

#ifndef TRAPEZ_RULE_H
#define TRAPEZ_RULE_H
#include <math.h>
#include "shunting_yard.h"

class numeric_functions {
public:
    numeric_functions(double a, double b, int n, int stepLength) : a(a), b(b), n(n), stepLength(stepLength) {}
    double calculate_trapez_rule(shunting_yard& function);
    double calculate_simpson_rule(shunting_yard& function);

private:
    const double a;
    const double b;
    const int n;
    const int stepLength;
};



#endif //TRAPEZ_RULE_H
