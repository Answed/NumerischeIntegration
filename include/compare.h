//
// Created by Arwed on 2/12/2025.
//

#ifndef COMPARE_H
#define COMPARE_H

#include <iostream>
#include <string>
#include "shunting_yard.h"
#include "numeric_functions.h"

void compare_area_numeric_functions(const std::string& functionString, double lowerLimit, double upperLimit, int iterations, double exact);
void compare_trapez(shunting_yard& function, numeric_functions& numericFunctions, double exact);
void compare_simpson(shunting_yard& function, numeric_functions& numericFunctions, double exact);
void compare_diff_numeric_functions(const std::string& functionString, const std::string& differentialFunction,
    double lowerLimit, double upperLimit, int iterations, double startValue, double stepLength);
std::vector<double> compare_euler(shunting_yard& function, numeric_functions& numericFunctions, double startValue, std::vector<double> xValues, std::vector<double> exactValues,double stepLength);
std::vector<double> compare_mid_point(shunting_yard& function, numeric_functions& numericFunctions, double startValue, std::vector<double> xValues, std::vector<double> exactValues, double stepLength);
std::vector<double> compare_runge_kutta_4th_order(shunting_yard& function, numeric_functions& numericFunctions, double startValue, std::vector<double> xValues, std::vector<double> exactValues, double stepLength);

double calculate_avg_error(const std::vector<double> errorValue);
double calculate_avg_percent(const std::vector<double> percentValue);

#endif //COMPARE_H
