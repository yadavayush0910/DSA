#include<iostream>
using namespace std;
int main()
{
    //Largest Of three
    int a;
    int b;
    int c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter third number:";
    cin>>c;
    // if((a>=b)&& (a>=c))
    //    cout<<"Largest is :"<<a<<endl;
    // else if((b>=a)&& (b>=c))
    //    cout<<"Largest is :"<<b<<endl;
    // else
    //     cout<<"Largest is :"<<c<<endl;
    
    if(a>=b)
    {
        if(a>=c)
        {
            cout<<"Largest is :"<<a<<endl;
        }
        else
        {
            cout<<"Largest is :"<<c<<endl;
        }
    }
    else
    {
         cout<<"Largest is :"<<b<<endl;
    }
}