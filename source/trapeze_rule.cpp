//
// Created by Arwed on 1/7/2025.
//

#include "trapeze_rule.h"

int trapeze_rule::calculate(shunting_yard& function) {
    double sum = 0;
    for (int i = i; i <= n-1; i++) {
        sum += 2 * function.calculate(a + i/n * (b - a));
    }
    sum += function.calculate(a) + function.calculate(b);
    return sum * (b - a) / (2 * n);
}