// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;

int main() {
    //Max Heap
   cout<<"Priority queue here :"<<endl;
   priority_queue<int> pq;
   pq.push(4);
   pq.push(2);
   pq.push(5);
   pq.push(3);
cout<<"element at top :"<<pq.top()<<endl;
pq.pop();
cout<<"element at top :"<<pq.top()<<endl;
cout<<"size:"<<pq.size()<<endl;
if(pq.empty()){
    cout<<" pq is empty ";
}
else{
    cout<<" pq is not empty";
}
cout<<endl;

//Min Heap 
priority_queue<int , vector<int>, greater <int> >minheap;
minheap.push(5);
minheap.push(2);
minheap.push(3);
minheap.push(4);
cout<<"element at top :"<<minheap.top()<<endl;
minheap.pop();
cout<<"element at top :"<<minheap.top()<<endl;
cout<<"size :"<<minheap.size()<<endl;
if(minheap.empty())
{
    cout<<" minheap is empty ";
}
else{
    cout<<" minheap is not empty";
}
    return 0;
}