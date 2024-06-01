#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isMatch(string s, string p) {
int m = s.length(), n = p.length();
if (n == 0) return m == 0;
bool firstMatch = (m > 0 && (s[0] == p[0] || p[0] == '.'));
if (p.length() >= 2 && p[1] == '*') {
return (isMatch(s, p.substr(2)) || (firstMatch && isMatch(s.substr(1), p)));
} else {
return firstMatch && isMatch(s.substr(1), p.substr(1));
}
}
int main() {
string s = "aaa", p = "a";
cout << boolalpha << isMatch(s, p) << endl; // Output: false
return 0;
} 