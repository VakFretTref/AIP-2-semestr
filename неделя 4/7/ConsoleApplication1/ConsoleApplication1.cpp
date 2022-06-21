#include <iostream>
//3F

int main()
{
	float X, n, y = 0;

	std::cin >> n >> X;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			y -= i * X;
		else
			y += i * X;
	}

	std::cout << y << std::endl;

	return 0;
}
