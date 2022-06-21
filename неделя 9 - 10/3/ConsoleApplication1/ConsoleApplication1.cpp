#include <iostream>
//7

void ShiftLeft3(float& A, float& B, float& C)
{
	float b = A;
	A = B;
	B = C;
	C = b;
}

int main()
{
	float A, B, C;

	std::cin >> A >> B >> C;

	ShiftLeft3(A, B, C);

	std::cout << A << B << C;

	return 0;
}