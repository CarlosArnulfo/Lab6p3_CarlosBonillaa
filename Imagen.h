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
	Imagen();
	Imagen(string,int, int);
	string getName();
	void setName(string);
	void setAltura(int);
	void setAnchura(int);
	int getAltura();
	int getAnchura();
	virtual void imprimirPropiedades() const;
	virtual ~Imagen();
	virtual void CalcularPropiedades()const;
};