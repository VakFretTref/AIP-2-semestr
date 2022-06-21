#include <iostream>
using namespace std;
//г
int main()
{
    int x, y;

    cout << "Enter x : ";
    cin >> x;

    cout << "Enter y : ";
    cin >> y;

    if ((y - 2 > x * x) && (y < x) || (y < -x)) cout << "Hits" << endl;
    else cout << "Misses" << endl;

    return 0;
}