#include <iostream>
//5

int main()
{
	int sum = 1, N;

	std::cin >> N;

	for (int i = 1; i <= N; i++)
		sum *= i;

	std::cout << sum << std::endl;
}
