/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file boolean_operators.cc
  * @author Raul Chavez Reyes
  * @date Oct 27 2022
  * @brief The program reads two natural numbers a and b, with b > 0, and prints 
  *        the integer division d and the remainder r of a divided by b.
  *        By definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  *
  */

#include <iostream>

int main () {

	int variable1 {0};
	int variable2 {1};
	

	std::cout << " Tabla de and " << std::endl;
	std::cout << variable1 << " and " << variable2 << " = " << (variable1 & variable2) << std::endl;
	std::cout << variable1 << " and " << variable1 << " = " << (variable1 & variable1) << std::endl;
	std::cout << variable2 << " and " << variable2 << " = " << (variable1 & variable2) << std::endl;
	std::cout << variable2 << " and " << variable1 << " = " << (variable1 & variable1) << std::endl;


	std::cout << " Tabla del or " << std::endl;
	std::cout << variable1 << " or " << variable2 << " = " << (variable1 | variable2) << std::endl;
	std::cout << variable1 << " or " << variable1 << " = " << (variable1 | variable1) << std::endl;
	std::cout << variable2 << " or " << variable2 << " = " << (variable1 | variable2) << std::endl;
	std::cout << variable2 << " or " << variable1 << " = " << (variable1 | variable1) << std::endl;
	
	std::cout << " Tabla del not " << std::endl;
	std::cout << " not " << variable1 << " = " << !variable1 <<std::endl;
	std::cout << " not " << variable2 << " = " << !variable2 <<std::endl;

	


return 0;



}


