// Third Pattern:
  
//     1 8 27 64 125 216
//     1 8 27 64 125 216
//     1 8 27 64 125 216
//     1 8 27 64 125 216
//     1 8 27 64 125 216
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
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<< (j+1)*(j+1)*(j+1)<<" ";
        }
        cout<<endl;
    }
}