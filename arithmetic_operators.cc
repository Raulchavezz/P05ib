/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file arithmetic_operators.cc
  * @author Raul Chavez Reyes alu0101472539@ull.edu.es
  * @date Oct 27 2022
  * @brief The program reads two natural numbers a and b, with b > 0, and prints 
  *        the integer division d and the remainder r of a divided by b.
  *        By definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>

int main() {

int numero1 = 5;
int numero2 = 20;
double numero3 = 3.5;
double numero4 = 8.3;

std:: cout << numero1 << " + " << numero2 << " = " << numero1 + numero2 <<std::endl;
std:: cout << numero1 << " - " << numero2 << " = " << numero1 - numero2 <<std::endl;
std:: cout << numero3 << " * " << numero4 << " = " << numero3 * numero4 <<std::endl;
std:: cout << numero2 << " % " << numero1 << " = " << numero2 % numero1 <<std::endl;
std:: cout << numero4 << " / " << numero3 << " = " << numero4 / numero3 <<std::endl;



return 0;
}


