#pragma once
#include "Imagen.h"
#include <vector>
class ImagenEscalaGrises: public Imagen {
	vector<int> vectorIntensidad;
	int contraste;
public:
	ImagenEscalaGrises(int, vector<int>, string, int, int);
	int getContraste();
	void setContraste(int);
	void aplicarBrillo(int,int);
	vector<int> getVectorIntensidad();
	void setVectorIntensidad(vector <int>);
	virtual void imprimirPropiedades() const override;
	virtual void CalcularPropiedades() const override;
};