#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter size of character square: ";
    cin >> num;
    char ch = 'a'; // Start character

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++)
         {
            cout << char(ch+i) << " "; 
            // Print the current character
        }
        
        cout << endl;
    }

    return 0;
}
