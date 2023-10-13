//memoization(O(nlogn))
int f(int index, int prev_index, int arr[], int n, vector<vector<int>> &dp){
      //subsequnce approach:
        //pick or notpick
        //via recursion:
    if(index==n) return 0;
    if(dp[index][prev_index+1] != -1) return dp[index][prev_index+1];
    
    int len = 0 + f(index+1, prev_index, arr, n, dp);
    if(prev_index == -1 || arr[index]>arr[prev_index]){
        len =max(len , 1+ f(index+1, index, arr, n, dp));
    }
  return  dp[index][prev_index +1]=len;

}
int longestIncreasingSubsequence(int arr[], int n)
{
    // Write Your Code here
      
    vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return f(0, -1, arr, n,dp
        );

        //check if increasing/not(chooselongest)
        
}
