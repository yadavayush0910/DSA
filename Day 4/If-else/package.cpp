#include<iostream>
using namespace std;
int main()
{
    int package;
    cout<<"Enter package in LPA :";
    cin>>package;
    if(package>10)
    {
        cout<<"Accepted";
    }
    else if(package=10)
    {
        cout<<" thik thak hae";
    }
    else
    {
        cout<<"Rejected";
    }
    return 0;
}