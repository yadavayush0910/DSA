// Print char from ‘A’ to ‘Z’ with the help of a for loop.
#include<iostream>
using namespace std;
int main()
{
    for(char name='A';name<='Z'; name++)
        cout<<name<<" ";
    cout<<endl;
     for(int i=65;i<=91;i++)
        cout<<char(i)<<" ";
    
    return 0;
}