#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int minOperations(string str1, string str2) {
    int m = str1.length();
    int n = str2.length();

    // Create a 2D vector to store the minimum operations required
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    // Initialize the base cases
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]});
        }
    }

    // Return the result stored in the bottom-right corner of the dp table
    return dp[m][n];
}

int main() {
    string str1 = "geek", str2 = "gesek";
    cout << "Output for Example 1: " << minOperations(str1, str2) << endl; // Expected Output: 1
    
    str1 = "cat";
    str2 = "cut";
    cout << "Output for Example 2: " << minOperations(str1, str2) << endl; // Expected Output: 1
    
    str1 = "sunday";
    str2 = "saturday";
    cout << "Output for Example 3: " << minOperations(str1, str2) << endl; // Expected Output: 3

    return 0;
}
