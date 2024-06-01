// Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


//              E
//            E D
//          E D C
//        E D C B
//      E D C B A
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch='E';
for(int row=1;row<=n;row++)
{
     for(int col=1;col<=n-row;col++)
    {
            cout<<" ";
    }
    for(int col=1;col<=row;col++)
    {
            cout<<char(ch-(col-1));
    }
    cout<<endl;
}
}