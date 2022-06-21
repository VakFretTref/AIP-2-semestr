#include <iostream>
#include <array>
//1 f   вариант 16


int main()
{
	srand(0);

	std::array<int, 20> M;

	for (int i = 0; i < 20; i++)
		M[i] = rand() % 21;

	for (int i = 0; i < 20; i++)
		std::cout << M[i] << ' ';

	return 0;
}
