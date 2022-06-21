#include <iostream>
#include <cmath>
//2 B

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
        std::cout << -0.1 * pow(i, 2) + 2 * i + 1 << std::endl;
}
