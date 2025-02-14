//
// Created by Arwed on 2/14/2025.
//

#include "trigometric_degree.h"

double degree_to_radian(double degree) {
    return degree * 3.14159265358979323846 / 180;
}

double dsin(double degree) {
    return sin(degree_to_radian(degree));
}

double dcos(double degree) {
    return cos(degree_to_radian(degree));
}

double dtan(double degree) {
    return tan(degree_to_radian(degree));
}

double adsin(double degree) {
    return asin(degree_to_radian(degree));
}

double adcos(double degree) {
    return acos(degree_to_radian(degree));
}

double adtan(double degree) {
    return atan(degree_to_radian(degree));
}