#include <iostream>
//4

int main()
{
    float N, M, H;

    std::cout << "Start : ";
    std::cin >> N;

    std::cout << "End :";
    std::cin >> M;

    std::cout << "Step : ";
    std::cin >> H;

    for (int i = N; i <= M; i += H)
        std::cout << i << std::endl;
}
