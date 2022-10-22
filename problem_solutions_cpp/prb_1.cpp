/*
Take 3 user input from user find the largest number
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
            cout << a << " is the largest number" << endl;
        else
            cout << c << " is the largest number" << endl;
    }
    else
    {
        if (b > c)
            cout << b << " is the largest number" << endl;
        else
        cout<<c<<" is the largest number"<<endl;
    }
    return 0;
}