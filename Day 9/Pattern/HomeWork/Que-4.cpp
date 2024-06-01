// Fourth Pattern:

//       A B C D
//       A B C
//       A B
//       A

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char ch = 'A';
    
    for (int row = n; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            cout << char(ch + (col - 1)) << " ";
        }
        cout << endl;
    }
    return 0;
}
