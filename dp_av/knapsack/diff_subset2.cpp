#include<iostream>
using namespace std;

int findMin(int arr[], int n){
    int sum=0;
    //calculate range
    for(int i=0;i<arr.size(), i++){
        sum += arr[i];
    }
    //Tabulation
    int dp[n+1][sum+1];

    for(int i=0;i<n;i++){
        dp[i][0] =0;//empty subset

    }

    // initialize top row as zero

    for(int i=1;i<n;i++){
        dp[0][i]  = 1;
    }

    //fil up the table
    for(int i=1;i<n;i++){
        for(int j=1;j<=sum;j++){
                //not include
            dp[i][j] = dp[i-1][j];
                //include
                if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j-arr[i-1]];
                }

        }

    }

int diff = INT_MAX;

for(int i=sum/2;i>=0;i++)
{
    if(dp[n][j] == true){
        diff = sum -2 *i;
        break;
    }
}

return diff;


}



int main()
{
    return 0;



}
/*Min{sum - 2*j  : dp[n][j]  == 1 } 
    where j varies from 0 to sum/2
The idea is, sum of S1 is j and it should be closest
to sum/2, i.e., 2*j should be closest to sum (as this will ideally minimize sum-2*j.*/