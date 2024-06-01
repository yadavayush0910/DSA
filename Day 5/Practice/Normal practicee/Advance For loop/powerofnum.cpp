#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    int power;
    cout<<"Enter power:";
    cin>>power;
    int ans=1;
    for(int i=0;i<power;i++)
    {
        ans=ans*num;
    }
    cout<<"Value is:"<<ans<<endl;
    return 0;
}