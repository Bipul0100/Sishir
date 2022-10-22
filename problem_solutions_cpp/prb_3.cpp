/*
Take 3 user input from user find the largest number and find the number is Even or odd.
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int largest_number = 0;
    if (a > b)
    {
        if (a > c)
        {
            // cout << a << " is the largest number" << endl;
            largest_number = a;
        }

        else
        {
            // cout << c << " is the largest number" << endl;
            largest_number = c;
        }
    }
    else
    {
        if (b > c)
        {
            // cout << b << " is the largest number" << endl;
            largest_number = b;
        }

        else
        {
            // cout << c << " is the largest number" << endl;
            largest_number = c;
        }
    }
    cout << largest_number << " is the largest number" << endl;
    // find the largest number is odd or even
    if (largest_number % 2 == 0)

        cout << "Largest number is Even" << endl;

    else
        cout << "Largest number is odd" << endl;

    return 0;
}