// /minimum-number-of-jumps-to-reach-end-of-a-given-array

// Input: arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
// Output: 3 (1-> 3 -> 9 -> 9)

#include <bits/stdc++.h>
using namespace std;

//  minjumps(arr, first index, last ele)
int minJumps(int arr[], int l, int h)
{

	// Base case: when source and destination are same
	if (h == l)
		return 0;

	// empty array
	if (arr[l] == 0)
		return INT_MAX;

	int min = INT_MAX;
	// we will first take first jump and proceed further form l+1
	// jump fursther wull be l+1, l+2 l+3...dependent on value at array's index
	for (int i = l + 1; i <= h && i <= l + arr[l]; i++)
	{
		int jumps = minJumps(arr, i, h);
		if (jumps != INT_MAX && jumps + 1 < min)
			min = jumps + 1;
	}

	return min;
}

int main()
{
	int arr[] = {2, 3, 1, 1, 4};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Minimum number of jumps to";
	cout << " reach the end is " << minJumps(arr, 0, n - 1);
	return 0;
}


#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int minJumpsToReachWife(int N, vector<int>& Arr) {
    vector<int> minJumps(N, INT_MAX);
    minJumps[0] = 0;  // It takes 0 jumps to reach the first shop

    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            if (j + Arr[j] >= i && minJumps[j] != INT_MAX) {
                minJumps[i] = min(minJumps[i], minJumps[j] + 1);
            }
        }
    }

    return (minJumps[N - 1] != INT_MAX) ? minJumps[N - 1] : -1;
}

int main() {
    int N = 6;  // Number of shops
    vector<int> Arr = {1, 3, 5, 8, 9, 2};  // Arr[i] is the jump range from shop i
    int result = minJumpsToReachWife(N, Arr);
    cout << result << endl;  // This will output the minimum number of jumps
    return 0;
}
