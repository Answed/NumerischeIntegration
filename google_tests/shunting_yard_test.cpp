//
// Created by arwed on 21/01/2025.
//
#include "gtest/gtest.h"
#include "shunting_yard.h"
#include <math.h>

TEST(ShuntingYard, Parsing) {
    shunting_yard test1 = shunting_yard("3+1");
    shunting_yard test2 = shunting_yard("3+1-2");
    shunting_yard test3 = shunting_yard("3*3+3");
    shunting_yard test4 = shunting_yard("2*(3+3)");
    shunting_yard test5 = shunting_yard("sin(90)");
    shunting_yard test6 = shunting_yard("90+12/6");
    ASSERT_EQ(test1.getOutput(), "31+");
    ASSERT_EQ(test2.getOutput(), "31+2-");
    ASSERT_EQ(test3.getOutput(),"33*3+");
    ASSERT_EQ(test4.getOutput(), "233+*");
    ASSERT_EQ(test5.getOutput(), "sin90");
    ASSERT_EQ(test6.getOutput(), "90126/+");
    ASSERT_EQ(test1.calculate(5), 4);
    ASSERT_EQ(test2.calculate(5), 2);
    ASSERT_EQ(test3.calculate(5), 12);
    ASSERT_EQ(test4.calculate(5), 12);
    ASSERT_EQ(test5.calculate(5), sin(90));
    ASSERT_EQ(test6.calculate(5), 92);
}
