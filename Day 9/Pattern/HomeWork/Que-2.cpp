// Second Pattern:
   
//     A
//     A B
//     A B C
//     A B C D
//     A B C D E
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch='A';
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<char(ch+(col-1))<<" ";
        }
        cout<<endl;
    }

}