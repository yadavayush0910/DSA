// Third Pattern:
     
//        10
//        10 11
//        10 11 12
//        10 11 12 13
//        10 11 12 13 14
//        10 11 12 13 14 15

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start=10;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<start+(col-1)<<" ";
        }
        cout<<endl;
    }

}