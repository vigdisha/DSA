//Target Sum Problem
// Given a list of non-negative integers, a1, a2, ..., an, and a target, S. Now you have 2 symbols + and -. For each integer, you should 
// choose one from + and - as its new symbol.
// Find out how many ways to assign symbols
//  to make sum of integers equal to target S.
#include<iostream>
using namespace std;
// <--------------Equivalent to the given difference question------------------------->
int findsubsets(vector<int> & arr, int target){
int n = arr.size();
//tabulation
vector<vector<int>> dp(n, vector<int>(tar+1, 0));
//if index is 0 and element is also zero at teh index and sum is also zero
if(arr[0] == 0) dp[0][0] =2;//pick or not pick
else dp[0][0] =1;//not pick as element at the index 0 as the index at 0 is not 0

if(arr[0] != 0 && arr[0]<= target){
dp[0][arr[0]] = 1;//If the first element in the 'num' array is not 0 and it is less than or equal to the target value 'tar,' then there is one way to create a partition where the difference is exactly equal to the value of the first element. You can pick this element and place it in one of the subsets. So, dp[0][num[0]] is set to 1.
}
for(int i=1;i<=n;i++)
{
    for(int j=1; j<=target;j++)
    {
        int nottaken = dp[i-1][j];

        if(arr[i]<=j){
            int taken = dp[i-1][j-arr[i]];
        }
        dp[i][j]= (notTaken + taken)%mod;
    }
}

return dp[n-1][target];

}

int countTarget(vector<int> &arr, int n, int d){
    int totSum = 0;
    for(int i=0; i<n;i++){
        totSum += arr[i];
    }
    
    //Checking for edge cases
    if(totSum-d <0 || (totSum-d)%2 ) return 0;
    
    return findsubsets(arr,(totSum-d)/2);
}

int main() {

  vector<int> arr = {5,2,6,4};
  int n = arr.size();
  int d=3;
                                 
  cout<<"The number of subsets found are " <<countTarget(n,d,arr);
}


