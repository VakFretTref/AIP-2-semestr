#include <iostream>
#include <cmath>
/*
Пользователь вводит параметры фигуры. Найти периметр и площадь фигур:
i. Правильный восьмиугольник
*/
int main()
{
    int a;
    
    std::cout << "Enter side length: ";
    
    std::cin >> a;
    
    std::cout << "S = " << 2 * a * a * (sqrt(2) + 1) << std::endl;
    
    return 0;
}
