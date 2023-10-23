// Given a rod of length n inches and an array of prices that includes prices of all pieces of size smaller than n. 
// Determine the maximum value obtainable by cutting up the rod and selling the pieces. 
#include<iostream>
#include <vector>
using namespace std;

int rodCut(int length[],int price[],  int len, int n,vector<vector<int>> &dp)
{
    if(n==0||len==0){
        return 0;
    }
    //memoization
     if (dp[n][len] != -1) {
        return dp[n][len];
    }

    if(length[n-1]<=len){
        dp[n][len] = max(price[n-1]+rodCut(length, price, n,len-length[n-1],dp),rodCut(length,  price,n-1,len,dp));
        
    }
    else{
        dp[n][len]  =rodCut(length,  price,n-1,len,dp);
    }

return dp[n][len];



}
int main()
{
      int price[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
    int n = sizeof(price) / sizeof(price[0]);
    int length[n];
    for (int i = 0; i < n; i++) {
        length[i] = i + 1;
    }
    int len = n;
 
    
    vector<vector<int>> dp(n + 1, vector<int>(len + 1, -1));
    cout << "Maximum obtained value  is "
         << rodCut(length,price, n, len,dp) << endl;
    
}