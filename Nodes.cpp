#include<iostream>
using namespace std;
class Node
{
public:
   int data;
   Node *next;
Node(int value)
{
   this-> data= value;
    this-> next= NULL;
}
};
int main()
{
    Node* Head = new Node(23);
    Node* Node1;
    Node1= new Node(25);
     Node1-> next= Head;
     Head= Node1;
     cout<< Head-> data<<"  "<< Head-> next << endl;
     cout<< Node1-> data<<"  "<< Node1-> next << endl;
}
