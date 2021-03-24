// Practice_1.cpp : Defines the entry point for the application.
//

#include "Practice_1.h"

using namespace std;

int main()
{
	std::cout << "El programa de la Practica 1 se ha inicializado.\n" << std::endl;
	bool detonador = -1;
	while (detonador != 0) {
		int eleccion;
		std::cout << "Elija un ejercicio (1 / 2) o salir (3): ";
		std::cin >> eleccion;
		if (eleccion == 1) {
			int eleccion_2;
			std::cout << "Elija la longitud de su array: ";
			std::cin >> eleccion_2;
			int* array = new  int[eleccion_2]{};
			for (int i = 0; i < eleccion_2; i++)
				cin >> array[i];
			reverse(array, eleccion_2);
		}
		else if (eleccion == 2) {
			int eleccion_3, eleccion_4, eleccion_5;
			std::cout << "Elija el primer integrante de su rango: ";
			std::cin >> eleccion_3;
			std::cout << "Elija el ultimo integrante de su rango: ";
			std::cin >> eleccion_4;
			std::cout << "Elija el patron de su rango: ";
			std::cin >> eleccion_5;
			range(eleccion_3, eleccion_4, eleccion_5);
		}
		else if (eleccion == 3) {
			detonador = 0;
		}
		else {
			std::cout << "Por favor escoja una opcion valida, escriba solamente 1 o 2.\n\n" << std::endl;
		}
	}
	return 0;
}
