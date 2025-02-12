#include <iostream>
#include <string>
#include "include/compare.h"

void area_numerik_functions() {
    std::string function;
    std::string input;
    double lowerLimit;
    double upperLimit;
    std::cout << "Bitte gebe die Funktion an\n Beachte x ist die Variable p ist Pi sqrt() ist die Wurzel."<< std::endl;
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
    compare_area_numeric_functions(function, lowerLimit, upperLimit, iterations, exact);
}
void differential_numerik_functions() {
    std::string function;
    std::string differentialFunction;
    std::string input;
    double lowerLimit;
    double upperLimit;
    std::cout << "Bitte gebe die Funktion an\n Beachte x ist die Variable p ist Pi sqrt() ist die Wurzel."<< std::endl;
    std::cin >> function;
    std::cout << "Bitte geben Sie die Differentialgleichung (Ableitunbg) der Funktion an" << std::endl;
    std::cin >> differentialFunction;
    std::cout << "Bitte gebe den Intervall an\n Beachte eine Leerstelle zwischen der unteren und oberen Grenze zu lassen -> a b nicht ab" << std::endl;
    std::cin >> lowerLimit >> upperLimit;
    std::cout << "Bitte gebe die Anzahl der Iterationen an" << std::endl;
    std::cin >> input;
    const int iterations = std::stoi(input);
    std::cout << "Bitte gebe die Schrittweite an" << std::endl;
    std::cin >> input;
    const double stepLength = std::stod(input);
    std::cout << "Bitte gebe einen Anfangswert an für: " << function << std::endl;
    std::cin >> input;
    double startValue = std::stod(input);
    compare_diff_numeric_functions(function, differentialFunction, lowerLimit, upperLimit, iterations, startValue, stepLength);
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
            differential_numerik_functions();
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