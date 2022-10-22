/*
Take 1 user input from user find the the number is Even or odd
*/

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
        cout << a << " is Even number" << endl;
    else
        cout << a << " is Odd number" << endl;
    return 0;
}