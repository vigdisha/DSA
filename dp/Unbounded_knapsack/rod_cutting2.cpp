//when 2 arguments are given
// ie:price[], and n;
//price=[2,5,7,8,10]
//length=1,2,3,4,5 respectively

// A memoization solution for Rod cutting problem
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

// A utility function to get the maximum of two integers
int max(int a, int b) { return (a > b) ? a : b; }

/* Returns the best obtainable price for a rod of length n
and price[] as prices of different pieces */
int cutRod(int price[], int index, int n,
		vector<vector<int> >& dp)
{
	// base case
	if (index == 0) {
		return n * price[0];
	}
    //memoization
	if (dp[index][n] != -1)
		return dp[index][n];
	// At any index we have 2 options either
	// cut the rod of this length or not cut
	// it
	int notCut = cutRod(price, index - 1, n,dp);
	int cut = INT_MIN;
	int rod_length = index + 1;

	if (rod_length <= n)
		cut = price[index]
			+ cutRod(price, index, n - rod_length,dp);

	return dp[index][n]=max(notCut, cut);
	
}
/* Driver program to test above functions */
int main()
{
	int arr[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
	int size = sizeof(arr) / sizeof(arr[0]);
	vector<vector<int> > dp(size,
							vector<int>(size + 1, -1));
	cout << "Maximum Obtainable Value is "
		<< cutRod(arr, size - 1, size, dp);
	getchar();
	return 0;
}












#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int cutRod(vector<int> &price, int n) {
    int val[n + 1];
    val[0] = 0;
//tabulation
    // Build the table
    //return the last entry of the table
    for (int i = 1; i <= n; i++) {
        int max_value = INT_MIN;
        for (int j = 0; j < i; j++) {
            max_value = max(max_value, price[j] + val[i - j - 1]);
        }
        val[i] = max_value;
    }
    return val[n];
}
