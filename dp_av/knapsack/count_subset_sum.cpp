//count subset whose sum is eqaul to the given sum
#include <iostream>
#include <vector>
using namespace std;

int subset(int arr[], int n, int sum, std::vector<std::vector<int>> &dp) {
  // Initialize the base case
  for (int i = 0; i <= n; i++) {
    dp[i][0] = 1; // If the sum is 0, there is one empty subset.
  }

  for (int i = 1; i <= n; i++) {
    for (int j =   1; j <= sum; j++) {
      if (arr[i - 1] <= j) {
        dp[i][j] = dp[i - 1][j - arr[i - 1]] + dp[i - 1][j];
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  return dp[n][sum];
}

int main() {
  int arr[] = {2, 3, 4, 6, 8, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int sum = 10;
  std::vector<std::vector<int>> dp(n + 1, std::vector<int>(sum + 1, 0));
  cout << subset(arr, n, sum, dp) << endl;
  return 0;
}
