#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "How many terms of Fibonacci series do you want?: ";
    cin >> n;
    
    int last = 0, prev = 1, curr;
    cout << last << " " << prev << " ";
    
    for(int i = 3; i <= n; i++) //i=3 means it starts printing 3rd term and print till nth number bcoz 1st term is 0 , second term is 1
     {
        curr = prev + last;
        cout << curr << " ";
        last = prev;  // Assign prev to last before updating prev
        prev = curr;
    }
    
    cout << endl;
    cout << "Khatam Tata Bye Bye";
    
    return 0;
}
