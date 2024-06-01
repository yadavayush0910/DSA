#include<iostream>
using namespace std;
int sortArray(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool flag = false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(!flag)
         break;
    }
}
int main()
{
    int arr[]={11,32,34,41,53,621,7,18,9,210};
    int n= sizeof(arr)/sizeof(arr[0]);
    sortArray(arr,n);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}