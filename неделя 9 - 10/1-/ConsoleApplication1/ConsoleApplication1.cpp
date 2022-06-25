#include <iostream>

void HIT(float X, float Y, float R, float r)
{
    if (X >= 0 && R && (Y <= 0 || r))
        std::cout << "Hit";
    else
        std::cout << "loss";
}

int main()
{
    float x, y;

    std::cout << "X = ";
    std::cin >> x;

    std::cout << "Y = ";
    std::cin >> y;

    float R1 = sqrt(pow(x, 2) + pow(y, 2)) <= 1;

    float R2 = sqrt(pow(x, 2) + pow(y, 2)) >= 0.3;

    HIT(x, y, R1, R2);

    return 0;
}
