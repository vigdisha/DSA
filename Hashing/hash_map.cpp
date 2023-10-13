#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int display(vector<int> &nums){
    int n  = nums.size();

    unordered_map<int, int> m;

    for(int i=0; i<n ;i++){
        int element  = nums[i];
        m[element]++;
  //key and alue pair are called using first and second;
    
    }
return 0;
}


int main()
{
    vector<int> nums = {1,2,3,4,2,3,2,3};
    return 0;
}