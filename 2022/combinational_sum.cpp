// Given an array of positive integers arr[] and an integer x, The task is to find all unique combinations in arr[] where the sum is equal to x. 

#include<iostream>
using namespace std;

void findNumber(vector<int>&arr, int sum, vector<vector<int> >&res,vector<int>& r,int i)
{
//if we get exact answer
if(sum==0){
    res.push_back(r);
    return;
}
//if number is smaller than expected sum push into r
while(i<arr.size() && sum -arr[i] >=0){
    r.push_back(arr[i]);
}
findNumber(arr, sum-arr[i], res, r, i);
i++;

r.pop_back();

}

//return all combo

vector<vector<int> > combinationSum(vector<int>& ar, int sum)
{
sort(arr.begin(), arr.end());

//remove duplicates

arr.erase(unique(arr.begin(), arr.end()), arr.end());

vector<int> r;
    vector<vector<int> > res;
    findNumbers(ar, sum, res, r, 0);
 
    return res;


}




int main()
{
      vector<int> ar;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);
    int n = arr.size();
 
    int sum = 8; // set value of sum
    vector<vector<int> > res = combinationSum(ar, sum);
 
    // If result is empty, then
    if (res.size() == 0) {
        cout << "Empty";
        return 0;
    }
     for (int i = 0; i < res.size(); i++) {
        if (res[i].size() > 0) {
            cout << " ( ";
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << ")";
        }
    }
  return 0;

}

//leetcode


class Solution {
public:
    // for the sake of convience, not to include again and again in my function call, I declare target here
    int target;
    
    vector<vector<int>> ans; // 2-D vector to store our answer
    
    void solve(vector<int>& arr, int i, int sum, vector<int> op)
    {
        // if i crosses the array size, we will return saying that no more possibilty is left to choose
        
        if(i >= arr.size()) 
        {
            return;
        }
        
        // if value at ith index + sum becomes equal to target, then we will store it in our answer array, saying that yes it is a possible combination
        if(arr[i] + sum == target)
        {
            op.push_back(arr[i]);
            ans.push_back(op);
            return;
        }
        
        // if value at ith index + sum is less than target, then we have two choices i.e whether to include this value in our possible combiation array or not include that,
        if(arr[i] + sum < target)
        {
            // we make two output vector, one for calling function at same index and anthor for calling function frm next index. Because for every element we have unlimited choices, that it will contribute in making our sum any number of times.
            vector<int> op1 = op;
            vector<int> op2 = op;
            
            op2.push_back(arr[i]);
            solve(arr, i, sum + arr[i], op2);
            solve(arr, i + 1, sum, op1);
        }
        else
        {
            solve(arr, i + 1, sum, op); // call for the next index
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& arr, int required_target) {
        ans.clear(); //clear global array, make to sure that no garbage value is present in it
        
        target = required_target; // give target what he wants 
        vector<int> op; // op array to try all possible combination
        sort(arr.begin(),arr.end()); // sort the array in ascending order
        solve(arr, 0, 0, op); // call function
        
        return ans; // return the final answer array
    }
};