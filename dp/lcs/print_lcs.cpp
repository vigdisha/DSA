//print lcs
#include <iostream>
#include <vector>
using namespace std;

// Function to find the Longest Common Subsequence (LCS) of two strings
vector<string> LCS(vector<string> x, vector<string> y, int n, int m, vector<vector<int>> &dp) {
    // Base case: If either of the strings is empty, return an empty vector
    if (n == 0 || m == 0) {
        vector<string> empty;
        return empty;
    }

    // Memoization: If the result is already calculated, return it
    if (dp[n][m] != -1) {
        return dp[n][m];
    }

    // If the last characters match
    if (x[n - 1] == y[m - 1]) {
        dp[n][m] = 1 + LCS(x, y, n - 1, m - 1, dp);
    } else {
        // If the last characters don't match, choose the maximum of two possibilities
        dp[n][m] = max(LCS(x, y, n - 1, m, dp), LCS(x, y, n, m - 1, dp));
    }

    int index = dp[n][m];
    vector<string> ans;
    while (m > 0 && n > 0) {
        if (x[n - 1] == y[m - 1]) {
            ans.push_back(x[n - 1]);
            m--;
            n--;
            index--;
        } else if (dp[n - 1][m] > dp[n][m - 1]) {
            n--;
        } else {
            m--;
        }
    }
    // Reverse the result vector to get the correct order
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    // Example usage
    vector<string> x = {"A", "B", "C", "D", "E"};
    vector<string> y = {"B", "D", "E", "F"};

    int n = x.size();
    int m = y.size();

    // Initialize the dp array with -1
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    vector<string> lcs = LCS(x, y, n, m, dp);

    // Print the LCS
    for (const string &str : lcs) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
 n