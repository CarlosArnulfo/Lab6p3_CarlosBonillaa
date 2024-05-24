#include "RGB.h"
#include <stdexcept> 

RGB::RGB(int r, int g, int b)
{
	if (r >= 0 && r <= 255 && g >= 0 && g <= 255 && b >= 0 && b <= 255){
		red = r;
		green = g;
		blue = b;
	}
	else {
		throw std::invalid_argument("Ingrese valores rgb validos (entre 0 y 255)");
	}
}

int RGB::getRed()
{
	return red;
}

int RGB::getGreen()
{
	return green;
}

int RGB::getBlue()
{
	return blue;
}

void RGB::setRed(int r)
{
	red = r;
}

void RGB::setGreen(int g)
{
	green = g;
}

void RGB::setBlue(int b)
{
	blue = b;
}
