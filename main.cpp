#include <iostream>
#include <string>
#include "shunting_yard.h"
#include "numeric_functions.h"


void compare_trapez(shunting_yard& function, numeric_functions& numericFunctions, double exact) {
    double trapez = numericFunctions.calculate_trapez_rule(function);
    double trapezError = abs(trapez - exact);
    double trapezPercent = trapezError / exact * 100;
    std::cout << "Trapez: " << trapez << " Error: " << trapezError <<" Prozentual: "<< trapezPercent << std::endl;
}
void compare_simpson(shunting_yard& function, numeric_functions& numericFunctions, double exact) {
    double simpson = numericFunctions.calculate_simpson_rule(function);
    double simpsonError = abs(simpson - exact);
    double simpsonPercent = simpsonError / exact * 100;
    std::cout << "Simpson: " << simpson << " Error: " << simpsonError << "Prozentual: " << simpsonPercent << std::endl;
}

void compare_area_numeric_functions(std::string functionString, double lowerLimit, double upperLimit, int iterations, int stepLength, double exact) {
    shunting_yard function = shunting_yard(functionString);
    numeric_functions numericFunctions= numeric_functions(lowerLimit, upperLimit, iterations, stepLength);
    compare_trapez(function, numericFunctions, exact);
    compare_simpson(function, numericFunctions, exact);
    std::cout << std::endl;
}

void area_numerik_functions() {
    std::string function;
    std::string input;
    double lowerLimit;
    double upperLimit;
    std::cout << "Bitte gebe die Funktion an\n Beachte x ist die Variable p ist Pi sqrt() ist die Wurzel.<< std::endl;
    std::cin >> function;
    std::cout << "Bitte gebe den Intervall an\n Beachte eine Leerstelle zwischen der unteren und oberen Grenze zu lassen -> a b nicht ab" << std::endl;
    std::cin >> lowerLimit >> upperLimit;
    std::cout << "Bitte gebe die Anzahl der Iterationen an" << std::endl;
    std::cin >> input;
    int iterations = std::stoi(input);
    std::cout << "Bitte gebe die Schrittweite an" << std::endl;
    std::cin >> input;
    int stepLength = std::stoi(input);
    std::cout << "Bitte gebe das Exakte Ergebniss des Integrals an für: " << function << std::endl;
    std::cin >> input;
    double exact = std::stod(input);
    compare_area_numeric_functions(function, lowerLimit, upperLimit, iterations, stepLength, exact);
}
void differential_numerik_functions() {
    std::string function;
    std::string input;
    double lowerLimit;
    double upperLimit;
    std::cout << "Bitte gebe die Funktion an\n Beachte x ist die Variable p ist Pi sqrt() ist die Wurzel.<< std::endl;
    std::cin >> function;
    std::cout << "Bitte gebe den Intervall an\n Beachte eine Leerstelle zwischen der unteren und oberen Grenze zu lassen -> a b nicht ab" << std::endl;
    std::cin >> lowerLimit >> upperLimit;
    std::cout << "Bitte gebe die Anzahl der Iterationen an" << std::endl;
    std::cin >> input;
    const int iterations = std::stoi(input);
    std::cout << "Bitte gebe die Schrittweite an" << std::endl;
    std::cin >> input;
    const int stepLength = std::stoi(input);
    std::cout << "Bitte gebe einen Anfangswert an für: " << function << std::endl;
    std::cin >> input;
    double startValue = std::stod(input);
    std::cout << "Bitte gebe das Exakte Ergebniss des Integrals an für: " << function << std::endl;
    std::cin >> input;
    const double exact = std::stod(input);

}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    std::string input;

    while (true) {
        std::cout << "Bitte wählen Sie ob sie eine Fläche Integrieren wollen oder eine Differentialgleichung.\n Flächenintegration = 1 Differentialgleichungsintegration = 2\nMit exit verlassen Sie das Programm" << std::endl;
        std::cin >> input;
        if (input == "1") {
            area_numerik_functions();
        } else if (input == "2") {
            std::cout << "Differentialgleichungsintegration" << std::endl;
        } else if (input == "exit") {
            break;
        } else {
            std::cout << "Falsche Eingabe" << std::endl;
        }

    }
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.