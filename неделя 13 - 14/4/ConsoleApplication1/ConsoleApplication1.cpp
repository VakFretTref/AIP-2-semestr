#include <iostream>
#include <array>
//7   вариант 16

int main()
{
	srand(5);

	std::array<int, 20> M;

	for (int i = 0; i < 20; i++)
		M[i] = rand() % 21 - 10;

	int quantityPositive = 0, sumPositive = 0, sumNegative = 0, quantityNegative = 0;

	for (int i = 0; i < 20; i++)
		if (M[i] >= 0)
		{
			quantityPositive++;
			sumPositive += M[i];
		}

	for (int i = 0; i < 20; i++)
		if (M[i] < 0)
		{
			quantityNegative++;
			sumNegative += M[i];
		}

	std::cout << "arithmetic averages of positive = " << sumPositive / quantityPositive
		<< "\narithmetic averages of negative = " << sumNegative / quantityNegative << std::endl;

	return 0;
}
