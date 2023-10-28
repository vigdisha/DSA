//coins add up to the given required amount
//you can take one coin multiple time/ infinite supplies

//find out the ways~~~ knapsack (unbounded)
#include<iostream>
#include<vector>
using namespace std;

int CoinCount(vector<int>& coin,int n,int sum,vector<vector<int>> &dp){

//1)sum==0
//ie::dp[0][0]=1
if(sum==0){
    return dp[n][sum]=1;
}
//2
 if (n == 0 || sum < 0)
        return 0;


//memoization
if(dp[n][sum] != -1){
    return dp[n][sum];
}

return dp[n][sum] = CoinCount(coin,n,sum-coin[n-1],dp)+ CoinCount(coin,n-1,sum,dp);

} 


int main()
{ int tc = 1;
    // cin >> tc;
    while (tc--) {
        int n, sum;
        n = 3, sum = 5;
        vector<int> coin = { 1, 2, 3 };
        // 2d dp array to store previously calculated
        // results
        vector<vector<int> > dp(n + 1,
                                vector<int>(sum + 1, -1));
        int res = CoinCount(coin, n, sum, dp);
        cout << res << endl;
    }
}  

// tabulation:

// for(i=1;i<n;i++){
//     for(int j=0;j<sum;j++){
//         //not take
//         dp[i][j] += dp[i-1][j];

//         if((j-coin[i])>=0){
//             //take
//             dp[i][j] += dp[i][j-coin[i-1]];
//         }
//     }
//     return dp[n][sum];
// }
