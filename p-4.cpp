#include <iostream>
#include <vector>
using namespace std;
int lengthOfLIS(vector<int>& nums) {
int n = nums.size();
if (n == 0) return 0;
vector<int> lis(n, 1); // lis[i] stores the length of the LIS ending at index i
int max_length = 1;
for (int i = 1; i < n; i++) {
for (int j = 0; j < i; j++) {
if (nums[i] > nums[j]) {
lis[i] = max(lis[i], lis[j] + 1);
}
}
max_length = max(max_length, lis[i]); 
}
return max_length;
}
int main() {
vector<int> arr1 = {3, 10, 2, 1, 20};
vector<int> arr2 = {3, 2};
vector<int> arr3 = {50, 3, 10, 7, 40, 80};
cout << "Length of LIS for arr1: " << lengthOfLIS(arr1) << endl; // Output: 3
cout << "Length of LIS for arr2: " << lengthOfLIS(arr2) << endl; // Output: 1
cout << "Length of LIS for arr3: " << lengthOfLIS(arr3) << endl; // Output: 4
return 0;
} 