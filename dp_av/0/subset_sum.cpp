#include<iostream>
using namespace std;
//subset sum array
//using knapsack
bool issubsetSum(int arr[], int target,    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0))){
// Initialize the first row to true because you can achieve a sum of 0 with an empty subset
    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }
for(i=0;i<arr.size();i++){
    for(int j=0;j<=target;j++){
        if(arr[i+1]<j){
            //choose the ele
          return  dp[i][j] = dp[i-1][j-i]||dp[i-1][j];
        }
        else{
            //not choose the ele
           return dp[i][j] = dp[i-1][j];

        }
    }
    return dp[n][target];
}
}
int main()
{
    int arr[]={};
    int target;
    if(!issubsetSum()){
        return true;
    }
    return 0;
}