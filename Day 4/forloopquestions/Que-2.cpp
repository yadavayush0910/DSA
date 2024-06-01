// Print all Odd numbers from 1 to n, take n as an input from the user.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(i%2==1)
        {
            cout<<i<<" ";
        }
    }
}