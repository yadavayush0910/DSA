// Print char from ‘Z’ to ‘A’ with the help of a for loop.
#include<iostream>
using namespace std;
int main()
{
    for(char name='Z'; name>='A';name--)
        cout<<name<<" ";
    cout<<endl;
    for(int i=90; i>=65;i--)
        cout<<char(i)<<" ";
}