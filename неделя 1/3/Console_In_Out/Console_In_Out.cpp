#include <iostream>
using namespace std;
/*
Пользователь вводит три числа. 
1) Найдите среднее арифметическое этих чисел,
2) а также разность удвоенной суммы первого и третьего чисел и утроенного второго
числа.
*/
int main()
{
    int a, b, c;
    
    cout << "Enter number 1: ";
    
    cin >> a;
    
    cout << "Enter number 2: ";
    
    cin >> b;
    
    cout << "Enter number 3: ";
    
    cin >> c;
    
    cout << "1)" << (a + b + c) / 3 
         << "\n2)" <<  2 * (a + c) - 3 * b
         << endl;
    
    return 0;
}
