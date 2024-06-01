#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    if(a>b)
      cout<<"First number is greater: "<<a<<endl;
    else
      cout<<"Second number is greater: "<<b<<endl;
    return 0;
}