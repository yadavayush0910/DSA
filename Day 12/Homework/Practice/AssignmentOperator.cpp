#include<iostream>
using namespace std;
int main()
{
    int a=100;
    cout<<(a*=3)<<endl;
    cout<<(a/=3)<<endl;
    cout<<(a+=3)<<endl;
    cout<<(a%=3)<<endl;
    cout<<(a-=3)<<endl;
    return 0;
}