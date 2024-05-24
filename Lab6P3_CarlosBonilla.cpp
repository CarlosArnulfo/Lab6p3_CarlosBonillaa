// Lab6P3_CarlosBonilla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ImagenColor.h"
#include "RGB.h"
using namespace std;
void menu() {
	int menu = 0;
	do
	{
		cout << "1. Crear Imagen" << endl;
		cout << "2. Listar Imagenes" << endl;
		cout << "3. Aplicar Brillo" << endl;
		cout << "4. Mostrar Propiedades" << endl;
		cout << "5. Salir" << endl;
		cout <<endl;
		cout << "Ingrese la opcion que desea realizar " << endl;
		cin >> menu; 
		if (menu==1)
		{

		} else if (menu == 2)
		{

		}
		else if (menu == 3)
		{

		}
		else if (menu == 4)
		{

		}
		else if (menu == 5)
		{

		}
		else {

		}

	} while (menu=!5);
}

int main()
{
    menu();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
