#include <iostream>
#include <queue>
using namespace std;

int kthlargest(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> pq; // min-heap
    for(int i = 0; i < n; i++) {
        pq.push(arr[i]);
        if (pq.size() > k) // Limit the size of the heap to k
            pq.pop(); // Remove the smallest element
    }
    return pq.top(); // Return the kth largest element
}

int main() {
    int arr[] = {1, 12, 30, 44, 52, 7};
    int n = 6;
    int k = 2;
    cout << "The " << k << "th largest element is: " << kthlargest(arr, n, k) << endl;
    return 0;
}