#include <iostream>
#include <array>
//11   вариант 16

int main()
{
	srand(5);

	std::array<int, 20> M;

	for (int i = 0; i < 20; i++)
		M[i] = rand() % 21 - 10;

	int quantity = M[0];

	for (int i = 1; i < 20; i++)
		quantity += M[i];

	quantity /= 20;

	std::cout << "arithmetic averages = ";

	for (int i = 0; i < 20; i++)
		if (M[i] < quantity)
			std::cout << M[i] << ' ';

	std::cout << std::endl;

	return 0;
}
