#include "ImagenColor.h"
#include "RGB.h"
void ImagenColor::aplicarBrillo(int r,int g, int b, int i)
{
	RGB* nuevoRGB = new RGB(r,g,b);
	vector<RGB*> nuevoVector = getVectorRGB();
		nuevoVector[i] = nuevoRGB;
		setVectorRGB(nuevoVector);
}

int ImagenColor::CalcularPropiedades()
{
	int total = 0;
	for (int i = 0; i < getVectorRGB().size(); i++)
	{
		total += getVectorRGB()[i]->getRed() + getVectorRGB()[i]->getGreen() + getVectorRGB()[i]->getBlue();
	}
	return total / (getAnchura()*getAltura());
}

vector<RGB*> ImagenColor::getVectorRGB()
{
	return vector<RGB*>();
}

void ImagenColor::setVectorRGB(vector<RGB*> temp)
{
	vectorRGB = temp;
}
