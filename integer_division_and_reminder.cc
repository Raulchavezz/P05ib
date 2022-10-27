/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_reminder.cc
  * @author Raul Chávez Reyes
  * @date Oct 18 2022
  * @brief Escriba un programa que lea dos números naturales a y b, con b > 0, e imprima la división entera d y el resto r de a dividido por b.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */



#include <iostream>

int main() {

    int numeroA;
    int numeroB;

    std::cout << " Introduzca el numero A " << std::endl;
    std::cin >> numeroA;
    std::cout << " Introduzca el nunmero B " << std::endl;
    std::cin >> numeroB;
    std::cout << " El resultado de la división es  " << numeroA/numeroB << " " << numeroA%numeroB << std::endl;

    return 0;
} 

