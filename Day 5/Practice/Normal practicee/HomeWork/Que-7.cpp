// Print n’th Fibonacci number.
#include<iostream>
using namespace std;
int fibonacci(int n)
{
    int last=0,prev=1,curr;
    cout<<last<<" "<<prev<<" ";
    for(int i=3;i<=n;i++) // i=3 means it starts printing 3rd number and print till nth number bcoz 1st term is 0 , second term is 1
    {
        curr= prev+ last;
        cout<<curr<<" ";
        last= prev;
        prev= curr;
    }
    cout<<endl;
    cout<<"Khatam ab"<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of terms you want of fibonacci series:";
    cin>>n;
    fibonacci(n);
}