#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    int ans=1;
    // if(num==0)
    //    cout<<"1"<<endl; No need even if we give 0 as input ans remains 1 inside loop it breaks at value '1'
    for(int i=1;i<=num;i++)
    {
       ans= ans*i;
    }
    cout<<ans;
}