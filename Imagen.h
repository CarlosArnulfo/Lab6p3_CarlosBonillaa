#pragma once
#include <iostream>
using namespace std;
class Imagen {
protected:
	string nombre;
	int ancho;
	int largo;
	int pixeles;
public:
	Imagen(int, int);
	void setAltura(int);
	void setAnchura(int);
	int getAltura();
	int getAnchura();
	
};