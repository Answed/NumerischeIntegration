//
// Created by Arwed on 1/7/2025.
//

#ifndef TRAPEZ_RULE_H
#define TRAPEZ_RULE_H
#include <math.h>
#include <vector>
#include "shunting_yard.h"

class numeric_functions {
public:
    numeric_functions(double a, double b, int n) : a(a), b(b), n(n){}
    double calculate_trapez_rule(shunting_yard& function);
    double calculate_simpson_rule(shunting_yard& function);
    std::vector<double> calculate_euler_rule(shunting_yard& function, double stepLength, double StartValue, const std::vector<double> &xValues);
    std::vector<double> calculate_mid_point_rule(shunting_yard& function, double stepLength, double StartValue, const std::vector<double>& xValues);
    std::vector<double> calculate_runge_kutta_4th_order(shunting_yard& function, double stepLength, double StartValue, const std::vector<double>& xValues);
    std::vector<double> calculate_x_values(double stepLength);

private:
    const double a;
    const double b;
    const int n;
};



#endif //TRAPEZ_RULE_H
