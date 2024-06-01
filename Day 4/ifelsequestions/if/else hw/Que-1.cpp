// Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter first number:";
cin>>a;
int b;
cout<<"Enter second number:";
cin>>b;
if(a>b)
{
    cout<<"First number is greater:"<< a<<endl;
}
else
{
    cout<<"Second number is greater:"<<b<<endl;
}
}