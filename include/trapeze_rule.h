//
// Created by Arwed on 1/7/2025.
//

#ifndef TRAPEZ_RULE_H
#define TRAPEZ_RULE_H
#include <math.h>
#include "shunting_yard.h"

class trapeze_rule {
public:
    trapeze_rule(const double a, const double b, const int n) : a(a), b(b), n(n) {};
    int calculate(shunting_yard& function);
private:
    const double a;
    const double b;
    const int n;
};



#endif //TRAPEZ_RULE_H
