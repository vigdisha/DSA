//Given two strings, S1 and S2, the task is to find the length of the Longest Common Subsequence,
//we return the max length possible not the subsequence
//subsequence is discontinuous
#include<iostream>
#include<vector>
using namespace std;

int LCS(vector<string> x,vector<string> y, int n, int m,vector<vector<int>> &dp){
    if(n==0|| m==0){
        return 0;
    }
    //memoization
    if(dp[n][m]!=-1){
        return dp[n][m];

    }
    //if last char match
    if(x[n-1]==y[m-1]){
      return  dp[n][m]= 1+LCS(x,y,n-1,m-1,dp);
    }
    else{
      return   dp[n][m] = max(LCS(x,y,n-1,m,dp),LCS(x,y,n,m-1,dp));
    }

    
}





int main()
{
    char x[] = "AGGTAB";
    char y[] = "GXTXAYB";
 
    int n= strlen(X);
    int m = strlen(Y);
    vector<vector<int> > dp(m + 1, vector<int>(n + 1, -1));
    cout << "Length of LCS is " << lcs(x,y, n,m, dp);
 
    return 0;
    
}