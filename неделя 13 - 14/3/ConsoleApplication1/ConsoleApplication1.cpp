#include <iostream>
#include <array>
//8   вариант 16

int main()
{
	srand(0);

	std::array<int, 20> M;

	for (int i = 0; i < 20; i++)
		M[i] = rand() % 21 - 10;

	int quantity = 0;

	for (int i = 0; i < 20; i++)
		if (M[i] >= 0)
			quantity++;

	std::cout << "the number of positive = " << quantity << "\nhe number of negative = " << 20 - quantity << std::endl;

	return 0;
}
