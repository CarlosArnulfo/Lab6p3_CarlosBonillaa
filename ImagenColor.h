#pragma once
#include "Imagen.h"
#include "RGB.h"
#include <vector>
using namespace std;
class ImagenColor : public Imagen {
	int profundidadColor;
	vector<RGB*> vectorRGB;
public:
	ImagenColor();
	ImagenColor(int,vector<RGB*>,string,int,int);
	void aplicarBrillo(int,int,int,int);
	void CalcularPropiedades() const override;
	vector<RGB*> getVectorRGB();
	void setVectorRGB(vector <RGB*>);
	virtual void imprimirPropiedades() const override;
};