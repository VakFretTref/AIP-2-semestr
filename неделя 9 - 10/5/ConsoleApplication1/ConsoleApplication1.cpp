#include <iostream>
//16 E

int main()
{

	int i, max, t;

	std::cout << "initial value = ";
	std::cin >> i;

	std::cout << "final value = ";
	std::cin >> max;

	std::cout << "tab step = ";
	std::cin >> t;

	for (; i < max; i += t)
	{
		if (i > 2)
			std::cout << "y = " << 2 * i - 15;
		else if (i < 2)
			std::cout << "y = " << 3 * abs(i - 1) - 8;
		else
			std::cout << "y = " << 5;

		std::cout << std::endl;
	}

	return 0;
}
