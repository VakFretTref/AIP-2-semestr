#include <iostream>
#include <array>
//2

void multiplication(std::array <std::array<int, 3>, 3>& M)
{
    int b;

    for (int i = 0; i < 3; i++)
    {
        b = M[i][1];

        for (int j = 0; j < 3; j++)
            M[i][j] *= b;
    }
}

void outputMatrix(std::array <std::array<int, 3>, 3> M)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
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

    std::cout << "\nmatrix after: \n" << std::endl;

    multiplication(M);
    outputMatrix(M);

    getchar();

    return 0;
}