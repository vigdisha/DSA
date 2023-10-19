#include <iostream>
#include <vector>
using namespace std;

int knapsack(vector<int> &weight, vector<int> &value, int knapsack_weight, int n, vector<vector<int>> &dp) {
    // BASE condition: smallest input/invalid situation
    if (knapsack_weight = 0 || n = 0) {
        return 0;
    }

    // Memoization: base case
    if (dp[n][knapsack_weight] != -1) {
        return dp[n][knapsack_weight];
    }

    // CHOICE diagram:
    // If the weight of the current item is less than or equal to knapsack_weight
    if (weight[n - 1] <= knapsack_weight) {
        // Calculate the maximum of two cases:
        // 1. Include the current item
        // 2. Exclude the current item
        dp[n][knapsack_weight] = max(
            value[n - 1] + knapsack(weight, value, knapsack_weight - weight[n - 1], n - 1, dp),
            knapsack(weight, value, knapsack_weight, n - 1, dp)
        );
    } else {
        // If the weight of the current item is greater than knapsack_weight, skip it
        dp[n][knapsack_weight] = knapsack(weight, value, knapsack_weight, n - 1, dp);
    }

    return dp[n][knapsack_weight];
}

int main() {
    vector<int> weight = {2, 3, 4, 5};
    vector<int> value = {3, 4, 5, 6};
    int knapsack_weight = 5;
    int n = weight.size();

    // Initialize the DP table with -1 values
    vector<vector<int>> dp(n + 1, vector<int>(knapsack_weight + 1, -1));

    int max_profit = knapsack(weight, value, knapsack_weight, n, dp);

    cout << "Maximum Profit: " << max_profit << endl;

    return 0;
}
 