// Print Sum of square of first n natural number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n for sum of square of first n natural number : ";
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans= ans+(i*i);
    }
    cout<<"Sum of square of first n natural number is:"<<ans<<endl;
    cout<<"Sum of square of first n natural number is:"<<int((n*(n+1)*(2*n+1))/6)<<endl;

    return 0;
}
