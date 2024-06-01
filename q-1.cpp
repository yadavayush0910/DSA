#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(const string& str) {
    int start = 0;
    int end = str.length() - 1;
    while (start <= end)
     {
        if (str[start] == str[end])
         {
            start++;
            end--;
        } 
        else 
        {
            return false;
        }
    }
    return true;
}

int main() {
    string str1 = "malam";
    string str2 = "yalam";
    
    string str3 = str1 + str2;

    cout << "String formed is: " << str3 << endl;
    bool isPalindrome = checkPalindrome(str3);
    cout << "Answer is: " << (isPalindrome ? "true" : "false") << endl;

    return 0;
}
