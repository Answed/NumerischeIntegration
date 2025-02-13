//
// Created by Arwed on 1/7/2025.
//

#include "numeric_functions.h"

std::vector<double> numeric_functions::calculate_x_values(const double stepLength) const {
    std::vector<double> x;
    for (int i = 0; i < n; i++) {
        x.push_back(a + i * stepLength);
    }
    return x;
}


double numeric_functions::calculate_trapez_rule(shunting_yard& function) const {
    double sum = 0;
    for (double i = 1; i <= n-1; i++) {
      sum += 2 * function.calculate(a + i/n * (b - a), 0);
    }
    sum += function.calculate(a, 0) + function.calculate(b, 0);
    return sum * (b - a) / (2 * n);
}

double numeric_functions::calculate_simpson_rule(shunting_yard& function) const {
    double sum = 0;
    double xValue[n+1];
    xValue[0] = a;
    for (int i = 1; i <= n; i++) {
        xValue[i] = xValue[0] + static_cast<double>(i)/n * (b - a);
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
std::vector<double> numeric_functions::calculate_euler_rule(shunting_yard& function, double stepLength, double StartValue, const std::vector<double> &xValues) const {
    std::vector<double> y;
    y.push_back(StartValue);
    for (int i = 1; i < n; i++) {
        y.push_back(y[i-1] + stepLength * function.calculate(xValues[i-1], y[i-1]));
    }
    return y;
}
std::vector<double> numeric_functions::calculate_mid_point_rule(shunting_yard& function, double stepLength, double StartValue, const std::vector<double>& xValues) const {
    std::vector<double> y;
    y.push_back(StartValue);
    for (int i = 1; i < n; i++) {
      double k1 = y[i-1] + stepLength / 2 * function.calculate(xValues[i-1], y[i-1]);
      y.push_back(y[i-1] + stepLength * function.calculate(xValues[i-1] + stepLength / 2, k1));
    }
    return y;
}
std::vector<double> numeric_functions::calculate_runge_kutta_4th_order(shunting_yard &function, double stepLength, double StartValue, const std::vector<double>& xValues) {
    std::vector<double> y;
    y.push_back(StartValue);
    for (int i = 1; i < n; i++) {
        double k1 = stepLength * function.calculate(xValues[i-1], y[i-1]);
        double k2 = stepLength * function.calculate(xValues[i-1] + stepLength / 2, y[i-1] + k1 / 2);
        double k3 = stepLength * function.calculate(xValues[i-1] + stepLength / 2, y[i-1] + k2 / 2);
        double k4 = stepLength * function.calculate(xValues[i-1] + stepLength, y[i-1] + k3);
        y.push_back(y[i-1] + (k1 + 2 * k2 + 2 * k3 + k4) / 6);
    }
    return y;
}
