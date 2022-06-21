#include <iostream>
//1 f   вариант 16

struct Time
{
	unsigned int seconds;
	unsigned int minutes;
	unsigned int hours;
};

int Fun(Time T1, Time T2)
{
	unsigned int T1sec = T1.seconds + (T1.minutes + T1.hours * 60) * 60;

	unsigned int T2sec = T2.seconds + (T2.minutes + T2.hours * 60) * 60;

	return T2sec - T1sec;
}

int main()
{
	srand(0);

	Time T1, T2;

	T1.hours = rand() % 10;
	T1.minutes = rand() % 60;
	T1.seconds = rand() % 60;
	
	T2.hours = rand() % 10;
	T2.minutes = rand() % 60;
	T2.seconds = rand() % 60;

	std::cout << "number of minutes: " << Fun(T1, T2) << std::endl;

	return 0;
}
