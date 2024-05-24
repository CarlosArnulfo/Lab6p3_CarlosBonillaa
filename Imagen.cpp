#include "Imagen.h"
#include <stdexcept> 

Imagen::Imagen(string nombre,int ancho, int largo)
{
	this->nombre = nombre;
	this->ancho = ancho;
	this->largo = largo;
	this->pixeles = ancho * largo;
}

string Imagen::getName()
{
	return string();
}

void Imagen::setName(string nombreNew)
{
	nombre = nombreNew;
}

void Imagen::setAltura(int altura)
{
	ancho = altura;
}

void Imagen::setAnchura(int)
{
}

int Imagen::getAltura()
{
	return 0;
}

int Imagen::getAnchura()
{
	return 0;
}

void Imagen::imprimirPropiedades() const
{
	cout << "Nombre: " << nombre << endl;
	cout << "ancho: " << ancho << endl;
	cout << "largo: " << largo << endl;
	cout << "pixeles: " << pixeles;
}
Imagen::~Imagen() {
}

void Imagen::CalcularPropiedades() const
{
}
