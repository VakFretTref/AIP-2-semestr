#include <iostream>
//11   вариант 16

struct robot
{
	unsigned int speed;
	unsigned int namber;
	unsigned int durationMovements;
};

float Fun(robot R)
{
	return R.speed * R.durationMovements;
}

int main()
{
	robot R;

	std::cout << "Enter durationMovements: ";
	std::cin >> R.durationMovements;

	std::cout << "Enter namber: ";
	std::cin >> R.namber;

	std::cout << "Enter speed: ";
	std::cin >> R.speed;

	std::cout << "distance: " << Fun(R) << std::endl;
}
