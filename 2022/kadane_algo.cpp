//maximum subarray
//***contagious**** part of array is subarray
//even a single element
#include<iostream>
using namespace std;

int maxSubarray(vector<int> &arr){
    int n = arr.size();
    int maxlen=0;
    //brute force:
    //generate all subarrays:(better)
    //update with max

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            maxlen = max(maxlen, sum);
        }
    }
    
   return maxlen;
}

int kadaneAlgo(int &arr[]){
     int sum =0;
     int max = INT16_MIN;
     //keep adding to the max value 
     //if the sum is greater than max
     for(int i=0;i<n;i++){//<--- creates subarray
     

        sum += arr[i];

        if(sum>max){
            max=sum;
        }

        //dont choose a negative value
        if(sum<0){
            sum =0;
        }
     }
    //  if(max<0){
    //     return max= 0;
    //  }
return max;
}


int main()
{
    return 0;
}