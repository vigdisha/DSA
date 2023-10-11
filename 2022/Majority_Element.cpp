// Find the majority element in the array.
// A majority element in an array A[] of size n is an element that appears
// more than n/2 times.

#include <iostream>
using namespace std;
vector<int> majorityElementII(vector<int> &nums) {
    int n = nums.size();
    unordered_map<int, int> m;
    vector<int> ans;

    // Step 1: Count occurrences of each element
    for (int i = 0; i < n; i++) {
        m[nums[i]]++;
    }

    // Step 2: Find elements with count > n/3
    int threshold = n / 3;
    for (auto x : m) {
        if (x.second > threshold) {
            ans.push_back(x.first);
        }
    }

    return ans;
}
int main()
{
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling
    findMajority(arr, n);

    return 0;
}