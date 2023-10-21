//partition the array into 2 ..
//Sum should be equal

#include<iostream>

bool isEqualSum(int arr[], ,int sum,int n){
    
    //sum of the subarray should be even
    //hence sum should be even
    if(sum%2 !=0){
        return false;
    }

    //generate one subset whose sum = sum/2
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum%2!=0){
            return false;
        }
        else if(sum%2==0){
            return isEqualSum(arr,sum/2);
        }
    }

}


using namespace std;
int main()
{
    return 0;
}