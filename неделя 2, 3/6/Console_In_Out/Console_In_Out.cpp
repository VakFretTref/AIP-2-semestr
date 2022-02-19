#include <iostream>
using namespace std;
/*
10. Вводятся три целых числа. Определить какое из них наибольшее
*/
int main()
{
    int a, b, c;

    cout << "Enter namber 'a': ";
    cin >> a;

    cout << "Enter namber 'b': ";
    cin >> b;

    cout << "Enter namber 'c': ";
    cin >> c;

    cout << "Biggest number ";

    if (a > b)
    {
        if (a > c) 
        { 
            cout << "'a'" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "'b'" << endl;
        }
        else
        {
            cout << "'c'" << endl;
        }
    }
 
    return 0;
}