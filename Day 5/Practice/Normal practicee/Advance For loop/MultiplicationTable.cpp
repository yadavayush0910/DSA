#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Table you want to print:";
    cin>>num;
    for(int i=1;i<=10;i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
    for (int i = num; i<=(num*10); i=i+num)
    {
        cout<<i<<" ";
    }
    
}