#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter character:";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
       cout<<"Character is a vowel";
    else if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
       cout<<"Character is a vowel";
    }
    else
    {
        cout<<"Character is a consonant";
    }      
}