#pragma once
#include "Imagen.h"
#include "RGB.h"
#include <vector>
class ImagenColor : public Imagen {
	int profundidadColor;
	vector<RGB*> vectorRGB;
public:
	ImagenColor : public Imagen();
	void aplicarBrillo(int,int,int,int);
	int CalcularPropiedades();
	vector<RGB*> getVectorRGB();
	void setVectorRGB(vector <RGB*>);

};