//
// Created by Arwed on 1/7/2025.
//

#include "numeric_functions.h"

double numeric_functions::calculate_trapez_rule(shunting_yard& function) {
    double sum = 0;
    for (int i = 1; i <= n-1; i++) {
        sum += 2 * function.calculate(a + i/n * (b - a));
    }
    sum += function.calculate(a) + function.calculate(b);
    return sum * (b - a) / (2 * n);
}

double numeric_functions::calculate_simpson_rule(shunting_yard& function) {
    double sum = 0;
    double xValue[n];
    xValue[0] = a;
    for (int i = 1; i <= n; i++) {
        xValue[i] = xValue[i-1] + i/n * (b - a);
    }

    for (int i = 0; i <= n-1; i++) {
        sum += 4 * function.calculate((xValue[i] + xValue[i+1]) / 2);
    }
    for (int i = 1; i <= n-1; i++) {
        sum += 2 * function.calculate(xValue[i]);
    }
    sum += function.calculate(a) + function.calculate(b);
    return sum * (b - a) / (6 * n);
}