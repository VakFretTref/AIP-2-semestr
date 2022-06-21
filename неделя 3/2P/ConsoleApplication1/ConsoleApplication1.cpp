#include <iostream>
#include <cmath>
//2P

int main()
{
    float N, min, max;

    std::cout << "Step : ";
    std::cin >> N;

    std::cout << "Start : ";
    std::cin >> min;

    std::cout << "End :";
    std::cin >> max;

    for (int i = min; i < max; i += N)
        std::cout << sqrt(5 + 3 / i) + 11 * i + (1 / tan(2 * i + 15)) << std::endl;
}
