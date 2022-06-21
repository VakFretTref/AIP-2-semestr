#include <iostream>
#include <cmath>
//2

float length(float x, float y)
{
	return abs(sqrt(pow(x - y, 2)));
}

void RectPS(float x1, float y1, float x2, float y2, float& P, float& S)
{
	float a = length(x1, x2);
	float b = length(y1, y2);

	P = a * 2 + b * 2;

	S = a * b;
}

int main()
{
	float x1, x2, y1, y2, P=0, S=0;

	std::cin >> x1 >> y1 >> x2 >> y2;

	RectPS(x1, y1, x2, y2, P, S);

	std::cout << "P = " << P << "\nS = " << S << std::endl;

	return 0;
}
