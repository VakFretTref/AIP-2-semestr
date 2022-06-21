#include <iostream>
//2 d    вариант 16

struct num
{
    int material,
        imaginary;
};

void Sum(num N1, num N2, num& sum)
{
    sum.imaginary = N1.imaginary + N2.imaginary;
    sum.material = N1.material + N2.material;
}

int main()
{
    num Num1, Num2, SumNum;

    std::cout << "Enter Num1 material namber: ";
    std::cin >> Num1.material;

    std::cout << "Enter Num1 imaginary namber: ";
    std::cin >> Num1.imaginary;

    std::cout << "Enter Num2 material namber: ";
    std::cin >> Num2.material;

    std::cout << "Enter Num2 imaginary namber: ";
    std::cin >> Num2.imaginary;

    Sum(Num1, Num2, SumNum);

    std::cout << "sum with numbers = " << SumNum.material << '+' << SumNum.imaginary << 'i' << std::endl;

    return 0;
}