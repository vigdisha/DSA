#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mod =(int)1e9+7;//global declaration
int findSubsets(int ind, int target, vector<int> &arr, vector<vector<int>> &dp)
{
    //Base Case
    if(ind==0){
        if(target==0 && arr[0] == 0){
            return 2;
        }
        if(target==0||target == arr[0]){
            return 1;
        }
        return 0;
    }
//memoization of recursive solution
    if(dp[ind][target]!= -1){
        return dp[ind][target];
    }
     //not taken
     int nottaken = findSubsets(ind-1,target, arr,dp);

    int taken =0;

    if(arr[ind]<=target){
        taken = findSubsets(ind-1, target-arr[ind],arr,dp);
    }

    return dp[ind][target] = (taken+nottaken)%mod


}
//d -->difference given
int findTargetsubsets(int d, vecotr<int> &arr){
    int n = arr.size();
    int totalsum = 0;
    for( auto x:arr)
    {
        totalsum += x;
    }

    //edge cases
    if(totalsum-d<=0)
    return 0;
    if(totalsum%2 != 0)
    return 0;
    /*  s1 = (sum(arr)-diff)/2   */
    int s2 = (totalsum-d)/2;

    vector<vector<int>> dp(n,vector<int>(s2+1, -1));
    return findSubsets(n-1, s2, arr, dp);

}


int main() {

  vector<int> arr = {0,0,1};
  int k=1;
                                 
  cout<<"The number of subsets found are " <<findWays(arr,k);
}