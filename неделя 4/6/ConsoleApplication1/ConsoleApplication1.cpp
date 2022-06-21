#include <iostream>
//3b

int main()
{
	float X, n, y = 0;

	std::cin >> n >> X;

	for (int i = 1; i <= n; i++)
		y += 1 / (i * X);

	std::cout << y << std::endl;

	return 0;
}
