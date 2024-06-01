#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

string minWindow(string s, string t) {
    unordered_map<char, int> patternCount;
    for (char c : t) {
        patternCount[c]++;
    }

    int start = 0, end = 0;
    int minLength = INT_MAX;
    int minStart = -1; // Initialize minStart to -1
    int requiredCharacters = t.length();

    for (; end < s.length(); end++) {
        if (patternCount[s[end]] > 0) {
            requiredCharacters--;
        }
        patternCount[s[end]]--;

        while (requiredCharacters == 0) {
            if (end - start + 1 < minLength) {
                minLength = end - start + 1;
                minStart = start;
            }
            patternCount[s[start]]++;
            if (patternCount[s[start]] > 0) {
                requiredCharacters++;
            }
            start++;
        }
    }

    return (minStart == -1) ? "" : s.substr(minStart, minLength); // Check if minStart is still -1
}

int main() {
    string string1 = "this is a test string";
    string pattern1 = "tist";
    cout << "Output for string1: " << minWindow(string1, pattern1) << endl; // Expected Output: "t stri"
    
    string string2 = "geeksforgeeks";
    string pattern2 = "ork";
    cout << "Output for string2: " << minWindow(string2, pattern2) << endl; // Expected Output: "ksfor"

    return 0;
}
