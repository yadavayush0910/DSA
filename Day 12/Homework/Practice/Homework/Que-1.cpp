// // 1: Temperature Range:
//  Write a program that checks 
//  if a given temperature is suitable for swimming. 
//  If the temperature is between 70 and 90 (Excluded) 
//  degrees Fahrenheit print yes, else NO. 

#include<iostream>
using namespace std;
int main()
{
int temperature;
cout<<"Enter temperature in fahrenheit:";
cin>>temperature;
if(temperature>=70 && temperature<90)
{
    cout<<"Yes"<<endl;
}
else
{
    cout<<"No"<<endl;
}
}