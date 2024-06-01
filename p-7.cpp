#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMinArrows(vector<vector<int>>& points) {
    if (points.empty()) return 0;

    // Sort the points based on the ending position
    sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    });

    int arrows = 1;
    int endPos = points[0][1];

    // Iterate through the points to find the minimum number of arrows required
    for (int i = 1; i < points.size(); ++i) {
        // If the current balloon's start position is beyond the end position of the previous balloon
        // we need to shoot another arrow
        if (points[i][0] > endPos) {
            ++arrows;
            endPos = points[i][1];
        }
    }

    return arrows;
}

int main() {
    // Example 1
    vector<vector<int>> points1 = {{10, 16}, {2, 8}, {1, 6}, {7, 12}};
    cout << "Output for Example 1: " << findMinArrows(points1) << endl; // Expected Output: 2

    // Example 2
    vector<vector<int>> points2 = {{1, 6}};
    cout << "Output for Example 2: " << findMinArrows(points2) << endl; // Expected Output: 1

    return 0;
}
