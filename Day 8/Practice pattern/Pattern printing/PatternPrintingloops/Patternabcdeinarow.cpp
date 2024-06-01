#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of square alphabet:";
    cin>>n;
    char ch='a';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<char(ch+j)<<" ";
        }
        cout<<endl;
    }
}