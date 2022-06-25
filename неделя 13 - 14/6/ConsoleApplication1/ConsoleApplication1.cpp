#include <iostream>
#include <array>
//14 b   вариант 16

int main()
{
	srand(5);

	std::array<int, 20> M1, M2, M3;

	for (int i = 0; i < 20; i++)
	{
		M1[i] = rand() % 21 - 10;
		M2[i] = rand() % 21 - 10;
	}

	for (int i = 0; i < 20; i++)
		M3[i] = M2[i] - M1[i];

	std::cout << "New array:\n";

	for (int i = 0; i < 20; i++)
			std::cout << M3[i] << ' ';

	std::cout << std::endl;

	return 0;
}
