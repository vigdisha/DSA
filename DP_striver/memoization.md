*** Memoization:
tend to store the vlaue of subproblems 
in some table or map

for example : in fibonacci series store the 

//in dynamic to store values use:
-->declare dp array:
int dp[]  = {-1,-1,-1,-1}

//change the index value to the value of subprob at the 
index and store them

<-----***********-------->
recursion ---> dp
1)dp array/vector 
2)string subprblem subproblems
3)return the value of subproblem stored



** tabulation:
base case to required

recursion---> tabulation
//in fibonacci series
1)dp[0] = 0, dp[1] = 1
2)for(int i=2; i<n; i++){
  dp[i] =   dp[i-1]  + dp[i-2]
}
