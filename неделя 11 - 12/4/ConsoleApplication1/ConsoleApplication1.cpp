#include <iostream>
//4    вариант 16

struct robot
{
	float dimensions;
	float weight;
	float maximumSpeed;
};

int main()
{
	srand(0);

	robot R[5];

	for (int i = 0; i < 5; i++)
	{
		R[i].dimensions = rand() % 51 + 50;
		R[i].weight = rand() % 101 + 50;
		R[i].maximumSpeed = rand() % 41 + 10;
	}

	robot TheHeaviest = R[0];

	for (int i = 1; i < 5; i++)
		if (R[i].weight > TheHeaviest.weight)
			TheHeaviest = R[i];

	std::cout << "dimensions: " << TheHeaviest.dimensions 
		      << "\nweight: " << TheHeaviest.weight 
		      << "\nmaximumSpeed: " << TheHeaviest.maximumSpeed << std::endl;

	return 0;
}