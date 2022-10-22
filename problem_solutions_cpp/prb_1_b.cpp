/*
Take 3 user input from user find the smallest number
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b)
    {
        if (a < c)
            cout << a << " is the smallest number" << endl;
        else
            cout << c << " is the smallest number" << endl;
    }
    else
    {
        if (b < c)
            cout << b << " is the smallest number" << endl;
        else
        cout<<c<<" is the smallest number"<<endl;
    }
    return 0;
}