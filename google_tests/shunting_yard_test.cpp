//
// Created by arwed on 21/01/2025.
//
#include "gtest/gtest.h"
#include "shunting_yard.h"
#include <math.h>

TEST(ShuntingYard, Parsing) {
    shunting_yard test1 = shunting_yard("3+1");
    ASSERT_EQ(test1.getOutput(), "31+");
    ASSERT_EQ(test1.calculate(5), 4);

    shunting_yard test2 = shunting_yard("3+1-2");
    ASSERT_EQ(test2.getOutput(), "31+2-");
    ASSERT_EQ(test2.calculate(5), 2);

    shunting_yard test3 = shunting_yard("3*3+3");
    ASSERT_EQ(test3.getOutput(),"33*3+");
    ASSERT_EQ(test3.calculate(5), 12);

    shunting_yard test4 = shunting_yard("2*(3+3)");
    ASSERT_EQ(test4.getOutput(), "233+*");
    ASSERT_EQ(test4.calculate(5), 12);

    shunting_yard test5 = shunting_yard("sin(90)");
    ASSERT_EQ(test5.getOutput(), "90sin");
    ASSERT_EQ(test5.calculate(5), sin(90));

    shunting_yard test6 = shunting_yard("90+12/6");
    ASSERT_EQ(test6.getOutput(), "90126/+");
    ASSERT_EQ(test6.calculate(5), 92);

    shunting_yard test7 = shunting_yard("sqrt(9)");
    ASSERT_EQ(test7.getOutput(), "9sqrt");
    ASSERT_EQ(test7.calculate(5), sqrt(9));

    shunting_yard test8 = shunting_yard("3^2");
    ASSERT_EQ(test8.getOutput(), "32^");
    ASSERT_EQ(test8.calculate(5), 9);

    shunting_yard test9 = shunting_yard("3^2+1");
    ASSERT_EQ(test9.getOutput(), "32^1+");
    ASSERT_EQ(test9.calculate(5), 10);

    shunting_yard test10 = shunting_yard("sqrt(4)+2");
    ASSERT_EQ(test10.getOutput(), "4sqrt2+");
    ASSERT_EQ(test10.calculate(5), sqrt(4)+2);

    shunting_yard test11 = shunting_yard("sin(90)+cos(0)");
    ASSERT_EQ(test11.getOutput(), "90sin0cos+");
    ASSERT_EQ(test11.calculate(5), sin(90)+cos(0));

    shunting_yard test12 = shunting_yard("x");
    ASSERT_EQ(test12.getOutput(), "x");
    ASSERT_EQ(test12.calculate(5), 5);

    shunting_yard test13 = shunting_yard("x+1");
    ASSERT_EQ(test13.getOutput(), "x1+");
    ASSERT_EQ(test13.calculate(5), 6);

    shunting_yard test14 = shunting_yard("e^x");
    ASSERT_EQ(test14.getOutput(), "ex^");
    ASSERT_EQ(test14.calculate(5), pow(M_E, 5));

    shunting_yard test15 = shunting_yard("2*p");
    ASSERT_EQ(test15.getOutput(), "2p*");
    ASSERT_EQ(test15.calculate(5), 2*M_PI);

}
