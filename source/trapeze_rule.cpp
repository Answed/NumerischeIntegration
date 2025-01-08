//
// Created by Arwed on 1/7/2025.
//

#include "trapeze_rule.h"

int trapeze_rule::calculate() {
    double sum = 0;
    for (int i = i; i <= n-1; i++) {
        sum += (a + i * (b - a) / n);
    }

}