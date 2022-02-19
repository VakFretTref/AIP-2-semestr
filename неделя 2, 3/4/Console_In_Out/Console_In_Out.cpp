#include <iostream>
//Вычислите значение выражения:a. (a + 4b)(a − 3b) + a^2 при a = 2 и b = 3.
int main()
{
    int a = 2, b = 3;
    std::cout << (a + 4 * b) * (a - 3 * b) + a * a << std::endl;
    return 0;
}