#include <iostream>
//13

void TimeToHMS(int T, int& H, int& M, int& S)
{
	H = T / 3600;
	M = (T - (H * 3600)) / 60;
	S = T - (H * 3600) - (M * 60);
}

int main()
{
	int T, H, M, S;

	std::cout << "T = ";
	std::cin >> T;

	TimeToHMS(T, H, M, S);

	std::cout << "H = " << H << "\nM = " << M << "\nS = " << S << std::endl;

	return 0;
}