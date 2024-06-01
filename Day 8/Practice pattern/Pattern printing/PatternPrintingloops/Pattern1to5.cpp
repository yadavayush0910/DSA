#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<" Enter size of square:";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout<<i+1<< " ";
        }
        cout<<endl;
    }
}