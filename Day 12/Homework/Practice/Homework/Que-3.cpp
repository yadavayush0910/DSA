// 3: Age Check:
//  Implement a program that checks 
//  if a person is a teenager.
//   A teenager is someone whose age is between 13 and 19 
//   (inclusive).
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n>=13)&&(n<=19))
    {
        cout<<"Teenager"<<endl;
    }
    else
    {
        cout<<"Not Teenager "<<endl;
    }
}