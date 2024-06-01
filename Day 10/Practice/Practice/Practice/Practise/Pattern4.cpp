#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch='A';
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<char(ch+(col-1));
        }
        cout<<endl;
    }
}