// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_set> // Include the header for unordered_set

using namespace std ;
int main() {
   unordered_set<int> s;
   s.insert(5);
   s.insert(15);
   s.insert(20);
   s.insert(10);

for(auto it=s.begin(); it!=s.end();it++)
    cout <<*(it) << " ";    
cout<<endl;
cout<< s.size() << endl;  
s.clear();
cout<< s.size() << endl;
    return 0;
}