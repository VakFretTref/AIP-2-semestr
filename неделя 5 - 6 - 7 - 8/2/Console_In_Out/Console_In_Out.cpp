#include <iostream>
#include <cmath>
using namespace std;
//I
int main()
{
    int x;

    cout << "enter x : ";
    
    cin >> x;
    
    cout << "y = ";

    if (x > 7) 
        cout << 2 * pow(x, 2) - 3 << endl;
    else if (x < 7) 
        cout << 2 * abs(x) + 3 << endl;
    else cout << 0 << endl;

    return 0;
}
