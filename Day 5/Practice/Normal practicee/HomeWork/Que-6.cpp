// Print Sum of cube of first n natural number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n for sum of cube of first n natural number : ";
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans= ans+(i*i*i);
    }
    cout<<"Sum of cube of first n natural number is:"<<ans<<endl;
    cout<<"Sum of cube of first n natural number is:"<<((n*(n+1))*(n*(n+1)))/4<<endl;

    return 0;
}
