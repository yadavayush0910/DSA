#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

string alienOrder(vector<string>& words) {
    // Step 1: Construct the graph
    unordered_map<char, unordered_set<char>> graph;
    unordered_map<char, int> indegree;
    for (string word : words) {
        for (char c : word) {
            indegree[c] = 0;
        }
    }
    for (int i = 0; i < words.size() - 1; i++) {
        string curr = words[i];
        string next = words[i + 1];
        int len = min(curr.length(), next.length());
        for (int j = 0; j < len; j++) {
            if (curr[j] != next[j]) {
                if (graph[curr[j]].find(next[j]) == graph[curr[j]].end()) {
                    graph[curr[j]].insert(next[j]);
                    indegree[next[j]]++;
                }
                break;
            }
            // Handle case where one word is a prefix of another
            if (j == len - 1 && curr.length() > next.length()) {
                return "";
            }
        }
    }
    // Step 2: Perform topological sort
    string result = "";
    queue<char> q;
    for (auto& entry : indegree) {
        if (entry.second == 0) {
            q.push(entry.first);
        }
    }
    while (!q.empty()) {
        char curr = q.front();
        q.pop();
        result += curr;
        for (char neighbor : graph[curr]) {
            indegree[neighbor]--;
            if (indegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }
    // Step 3: Check if there is a valid topological ordering
    if (result.length() != indegree.size()) {
        return "";
    }
    return result;
}

int main() {
    vector<string> words1 = {"baa", "abcd", "abca", "cab", "cad"};
    cout << "Output for Example 1: " << alienOrder(words1) << endl; // Output: 'b', 'd', 'a', 'c'
    vector<string> words2 = {"caa", "aaa", "aab"};
    cout << "Output for Example 2: " << alienOrder(words2) << endl; // Output: 'c', 'a', 'b'
    return 0;
}
