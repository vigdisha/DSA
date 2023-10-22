//difference of subsets is given
//find subset with sum ==s1
/*  s1 = (diff +summ(arr))/2   */
//hence converted to sum of subset

#include<iostream>
#include<vector>
using namespace std;

int diffOfSubset(int arr[], int n, int diff){
      int sum=0;
      for(auto x :arr){
        sum+=i;
      }

      if((diff + sum)%2 !=0)
      return 0;

      int t = (diff+sum)/2;
      //find subset with sum equal to t

      vector<vector<int>> dp(n+1, vector<int>(t+1, 0));
        dp[0][0] = 1;
// -->subset sum--->
          for(int i=1; i<n+1; i++) {
            for(int j=0; j<t+1; j++) {
                if(arr[i-1] <= j) 
                    dp[i][j] = (dp[i-1][j] + dp[i-1][j-arr[i-1]])%1000000007;
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][t];

}


int main()
{
    return 0;
}