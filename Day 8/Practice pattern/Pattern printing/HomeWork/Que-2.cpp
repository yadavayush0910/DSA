// Second Pattern:
   
//        1 4 9 16 25
//        1 4 9 16 25
//        1 4 9 16 25
//        1 4 9 16 25
//        1 4 9 16 25
//        1 4 9 16 25
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<< (j+1)*(j+1)<<" ";
        }
        cout<<endl;
    }
}