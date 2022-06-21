#include <iostream>
#include <array>
//4

void CreatingNewMatrix(std::array <std::array<int, 3>, 3>& M)
{
    int sum = 0;

    for (int i = 0; i < 3; i++)
        for (int j = i; j < 3; j += 2)
            if (M[i][j] > 0) 
                sum += M[i][j];
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

    std::cout << "\nmatrix after: \n" << std::endl;

    CreatingNewMatrix(M);
    outputMatrix(M);

    getchar();

    return 0;
}