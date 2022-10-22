#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int array[n];
    //take input from user
    cout<<"Input:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    //reverse the array
    for (int i = 0,j=n-1; i <= j; i++,j--)
    {
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
    //print the array
    cout<<"Reversed Order:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}