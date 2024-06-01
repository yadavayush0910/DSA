#include <iostream>
#include <queue>
using namespace std;

int kthsmallest(int arr[], int n, int k) {
    priority_queue<int> pq; // max-heap by default
    for(int i = 0; i < n; i++) {
        pq.push(arr[i]);
        if (pq.size() > k) // Limit the size of the heap to k
            pq.pop(); // Remove the largest element
    }
    return pq.top(); // Return the kth smallest element
}

int main() {
    int arr[] = {1, 12, 30, 44, 52, 7};
    int n = 6;
    int k = 2;
    cout << "The " << k << "th smallest element is: " << kthsmallest(arr, n, k) << endl;
    return 0;
}
