//
// Created by Arwed on 1/7/2025.
//

#include "numeric_functions.h"
#include <vector>

double numeric_functions::calculate_trapez_rule(shunting_yard& function) {
    double sum = 0;
    for (double i = 1; i <= n-1; i++) {
      sum += 2 * function.calculate(a + i/n * (b - a), 0);
    }
    sum += function.calculate(a, 0) + function.calculate(b, 0);
    return sum * (b - a) / (2 * n);
}

double numeric_functions::calculate_simpson_rule(shunting_yard& function) {
    double sum = 0;
    double xValue[n+1];
    xValue[0] = a;
    for (int i = 1; i <= n; i++) {
        xValue[i] = xValue[0] + (double)i/n * (b - a);
    }

    for (int i = 0; i <= n-1; i++) {
        sum += 4 * function.calculate((xValue[i] + xValue[i+1]) / 2, 0);
    }
    for (int i = 1; i <= n-1; i++) {
        sum += 2 * function.calculate(xValue[i], 0);
    }
    sum += function.calculate(a, 0) + function.calculate(b, 0);
    return sum * (b - a) / (6 * n);
}
std::vector<double> numeric_functions::calculate_euler_rule(shunting_yard& function, double stepLength, double StartValue) {
	std::vector<double> x;
    std::vector<double> y;
	for (int i = 0; i < n; i++) {
        x.push_back(a + i * stepLength);
    }
    y.push_back(StartValue);
    for (int i = 1; i < n; i++) {
        y.push_back(y[i-1] + stepLength * function.calculate(x[i-1], y[i-1]));
    }
    return y;
}
std::vector<double> numeric_functions::calculate_midde_point_rule(shunting_yard& function, double stepLength, double StartValue) {
    std::vector<double> x;
    std::vector<double> y;
    for (int i = 0; i < n; i++) {
        x.push_back(a + i * stepLength);
    }
    y.push_back(StartValue);
    for (int i = 1; i < n; i++) {
      double k1 = y[i-1] + stepLength / 2 * function.calculate(x[i-1], y[i-1]);
      y.push_back(y[i-1] + stepLength * function.calculate(x[i-1] + stepLength / 2, k1));
    }
    return y;
}