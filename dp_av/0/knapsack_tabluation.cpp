// Max profit
// given target weight
// 0/1 --> dp-->addition of fractional not allowed
// dp_-->optimal
#include <iostream>
using namespace std;

int knapsack(vector<int> &weight, vector<int> &value, int knapsack_weight, int n)
{
    int max_profit = 0;
    // BASE condition:samllest input/invalid situaution
    if (knapsack_weight = 0 || n == 0)
    {
        return 0;
    }
    // memoization:base case
    if (dp[n][knapsack_weight] != -1)
    {
        return dp[n][knapsack_weight];
    }

    for (int i = 0; i < n + 1; i++)//-->ocnstitutes to n
    {
        for (int j = 0; j < knapsack_weight + 1; j++)//--->constitutes to knapsack_weight
        {
            if (i == 0 || j == 0)
            {
                return dp[i][j] = 0;
            }
            else if (weight[i-1] <= w)
            {
                // inlcude the value at the weight+
                return dp[i][j] = max(value[i- 1] + dp[i- 1][j - w[i - 1]], dp[i - 1 ][w]);
            }
            else
            {
                return dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][knapsack_weight];
}
int main()
{
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

// 1)recursive base condition-->intitilaization in tabulation
// ie:if  (v==0||w==0)
// return dp[m][n]=0;
// 2)using loop :

// weight array will act as the item array and the 
// weight will act as the target