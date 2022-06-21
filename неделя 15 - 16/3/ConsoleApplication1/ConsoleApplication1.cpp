#include <iostream>
#include <array>
//7

void outputMatrix(std::array <std::array<int, 3>, 2> M)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j ++)
            std::cout << M[i][j] << ' ';

        std::cout << std::endl;
    }
}

int main()
{
    srand(3);

    std::array <std::array<int, 3>, 2> M;

    for (int i = 0; i < 3; i++)
    {
        M[0][i] = rand() % 101 - 1;
        M[1][i] = rand() % 11 - 1;
    }

    std::cout << "matrix before: \n" << std::endl;

    outputMatrix(M);

    std::array <std::array<int, 1>, 2> hurricane;

    int hurricaneDay;

    for (int i = 0; i < 3; i++)
        if (hurricane[0][0] < M[0][i] && hurricane[1][0] < M[1][i])
        {
            hurricane[0][0] = M[0][i];
            hurricane[1][0] = M[i][0];
            hurricaneDay = i;
        }

    std::cout << "\nhurricane Day: " << hurricaneDay + 1 << std::endl;

    getchar();

    return 0;
}