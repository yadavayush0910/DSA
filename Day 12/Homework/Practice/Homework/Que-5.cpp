// 5: What will be the result below according to the precedence table.

//     2*3-48==5/4*6
//     6<<2-4*8/2
//     5>4<3/2-8%4+5
//     14-8+92>>2+70
#include<iostream>
using namespace std;
int main()
{
    cout<<(2*3-48==5/4*6)<<endl;
    cout<<(6<<2-4*8/2)<<endl;
    cout<<(5>4<3/2-8%4+5)<<endl;
    cout<<(14-8+92>>2+70)<<endl;
    return 0;
}