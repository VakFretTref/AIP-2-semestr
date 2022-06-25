#include <iostream>
#include <array>
//20 a, b, c   вариант 16

struct Peple
{
	int height;
	int age;
	char surname;
};

int main()
{
	srand(5);

	std::array<Peple, 20> M;

	for (int i = 0; i < 20; i++)
	{
		M[i].age = rand() % 21 + 10;
		M[i].height = rand() % 60 + 120;
		M[i].surname = 'H';
	}

	//a
	Peple theHighest = M[0];

	for (int i = 1; i < 20; i++)
		if (M[i].height > theHighest.height)
			theHighest = M[i];

	std::cout << "the Highest: " << theHighest.surname << std::endl;

	//b
	int mediumAge = M[0].age;

	for (int i = 1; i < 20; i++)
		mediumAge += M[i].age;

	mediumAge /= 20;

	std::cout << "\nabove average age: ";

	for (int i = 0; i < 20; i++)
		if (M[i].age > mediumAge)
			std::cout << M[i].surname << ' ';

	std::cout << std::endl;

	//c
	int mediumHighest = M[0].height;

	for (int i = 1; i < 20; i++)
		mediumHighest += M[i].height;

	mediumHighest /= 20;

	std::cout << "\nbelow average age and above average height: ";

	for (int i = 0; i < 20; i++)
		if (M[i].age < mediumAge && M[i].height > mediumHighest)
			std::cout << M[i].surname << ' ';

	std::cout << std::endl;

	return 0;
}
