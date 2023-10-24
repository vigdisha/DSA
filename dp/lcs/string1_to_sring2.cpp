// The task is to remove/delete and insert the minimum number of characters from/in str1 to transform it into str2
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
in lcs(string x, string y,int m, int n, vector<vector<int>> &dp){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(x[n-1]==y[m-1]){
                dp[i][j] = 1+dp[i-1][j-1]
            }
            else{
                dp[i][j] =max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

void printMinDelAndInsert(string x, string y){
    cout<<"insertion"<<m-lcs(x,y,n,m);
    cout<<"deletion"<<n-lcs(x,y,n,m);
}
int main()
{
    int n,m;
    vector<vector<int>> sp(n+1, vector<int> (m+1, 0));
    return 0;
}