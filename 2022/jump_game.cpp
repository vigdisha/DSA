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
	int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Minimum number of jumps to";
	cout << " reach the end is " << minJumps(arr, 0, n - 1);
	return 0;
}
