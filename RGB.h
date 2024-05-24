#pragma once
class RGB {
	int red;
	int green;
	int blue;
public:
	RGB(int, int, int);
	int getRed();
	int getGreen();
	int getBlue();
	void setRed(int);
	void setGreen(int);
	void setBlue(int);
};