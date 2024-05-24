#include "ImagenColor.h"

ImagenColor::ImagenColor(int profundo,vector<RGB*> vector, string nombre, int ancho, int largo) :Imagen(nombre,ancho,largo) {
	this->profundidadColor = profundo;
	this->vectorRGB = vector;
}

void ImagenColor::aplicarBrillo(int r,int g, int b, int i)
{
	RGB* nuevoRGB = new RGB(r,g,b);
	vector<RGB*> nuevoVector = getVectorRGB();
		nuevoVector[i] = nuevoRGB;
		setVectorRGB(nuevoVector);
}

void ImagenColor::CalcularPropiedades() const
{
	int total = 0;
	for (int i = 0; i < vectorRGB.size(); i++)
	{
		total += vectorRGB[i]->getRed() + vectorRGB[i]->getGreen() + vectorRGB[i]->getBlue();
	}
	cout << "Intensidad promedio: " << total / pixeles << endl;
}



vector<RGB*> ImagenColor::getVectorRGB()
{
	return vector<RGB*>();
}

void ImagenColor::setVectorRGB(vector<RGB*> temp)
{
	vectorRGB = temp;
}

void ImagenColor::imprimirPropiedades() const
{
	Imagen::imprimirPropiedades();
	cout << "profundidad" << profundidadColor << endl;
	cout << "RGB: " << endl;
	for (int i = 0; i < vectorRGB.size(); i++)
	{
		cout << "(" << vectorRGB[i]->getRed() << ", " << vectorRGB[i]->getGreen() << ", " << vectorRGB[i]->getBlue() << ")"<< endl ;
	}
	cout << endl<<endl;
}
