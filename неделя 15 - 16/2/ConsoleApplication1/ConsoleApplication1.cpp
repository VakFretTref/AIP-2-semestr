#include <iostream>
#include <array>
//4

int CreatingNewMatrix(std::array <std::array<int, 3>, 3>& M)
{
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
            if (M[i][j] >= 0 && j % 2 == 0)
                sum += M[i][j];
    }

    return sum;
}
void outputMatrix(std::array <std::array<int, 3>, 3> M)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j ++)
        {
            std::cout << M[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main()
{
    
    std::array <std::array<int, 3>, 3> M;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            M[i][j] = rand() % 21 - 10;

    std::cout << "matrix before: \n" << std::endl;

    outputMatrix(M);

    std::cout << "\nsum: " << CreatingNewMatrix(M);;


    getchar();

    return 0;
}