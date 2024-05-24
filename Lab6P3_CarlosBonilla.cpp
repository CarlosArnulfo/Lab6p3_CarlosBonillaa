// Lab6P3_CarlosBonilla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ImagenColor.h"
#include "RGB.h"
#include <cstdlib> 
#include <ctime>
#include <vector>
using namespace std;
void menu() {
	vector<Imagen> vectorImagenes;
	srand((unsigned)time(0));
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
			int tipoImagen = 0;
			do
			{
				cout << "que imagen quiere crear" << endl;
				cout << "1. Imagen a color " << endl;
				cout << "2. Imagen escala de grises " << endl;
				cin >> tipoImagen;
			} while (tipoImagen==1||tipoImagen==2);
			string name;
			int ancho = 0;
			int largo = 0;
			cout << "ingrese nombre de la imagen" << endl;
			cin >> name;
			cout << "ingrese el ancho de la imagen " << endl;
			cin >> ancho;
			cout << "ingrese el largo de la imagen " << endl;
			cin >> largo;
			int profundidad = 0;
			if (tipoImagen==1)
			{
				do
				{
					cout << "ingrese el nivel de profundidad de color de la imagen (entre 1 y 24)"<< endl ;
					cin >> profundidad;
				} while (profundidad<1||profundidad>24);
				int cuantos = 0;
				cout << "Ingrese cuantos colores rgb quiere agregar"<<endl;
				cin >> cuantos;
				vector <RGB*> tempvector;
				for (int i = 0; i < cuantos; i++)
				{
					tempvector.push_back(new RGB(((rand() % 255) + 1), ((rand() % 255) + 1), ((rand() % 255) + 1)));
				}
				ImagenColor imagen = ImagenColor(profundidad,tempvector,name,ancho,largo);
			}
			else 
			{
				do
				{
					cout << "ingrese el nivel de contraste de la imagen (entre 0 y 100)" << endl;
					cin >> profundidad;
				} while (profundidad < 0 || profundidad>100);

				
			}

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
