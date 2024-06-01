#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum is:"<<sum<<endl;

    cout<<(num*(num+1)/2);
}