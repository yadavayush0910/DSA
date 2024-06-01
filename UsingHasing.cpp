#include <iostream>
#include <unordered_set>

using namespace std;

int findMissingNumber(int arr[], int n) {
	unordered_set<int> hashSet;
	for (int i = 0; i < n-1; i++) {
		hashSet.insert(arr[i]);
	}
	for (int i = 1; i <= n; i++) {
		
		if (hashSet.find(i) == hashSet.end()) {
			return i;
		}
	}
	return n+1;
}
int main() {
	int arr[] = {1, 2, 4, 6, 3, 7, 8};
	int n = sizeof(arr) / sizeof(arr[0]);

	int missingNumber = findMissingNumber(arr, n);
	cout << "Missing number is: " << missingNumber << endl;

	return 0;
}
