#include <iostream>
using namespace std;

void main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << a << " is the greatest";

    if (b > a)
        cout << b << " is the greatest";

    if (a == b)
        cout << "Both numbers are equal";
}
