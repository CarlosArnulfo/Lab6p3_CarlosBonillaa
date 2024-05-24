#include "ImagenEscalaGrises.h"

ImagenEscalaGrises::ImagenEscalaGrises(int contraste, vector<int> vector, string nombre, int ancho, int largo):Imagen(nombre,ancho,largo)
{
	vectorIntensidad = vector;
	this->contraste = contraste;
}

int ImagenEscalaGrises::getContraste()
{
	return contraste;
}

void ImagenEscalaGrises::setContraste(int cont)
{
	contraste = cont;
}

void ImagenEscalaGrises::aplicarBrillo(int nuevoValor,int i)
{
	vector<int> temp= vectorIntensidad;
	temp[i] = nuevoValor;
	vectorIntensidad = temp;
}

vector<int> ImagenEscalaGrises::getVectorIntensidad()
{
	return vectorIntensidad;
}

void ImagenEscalaGrises::setVectorIntensidad(vector <int> vectorNuevo)
{
	vectorIntensidad = vectorNuevo;
}
