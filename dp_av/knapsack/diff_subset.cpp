//Partition a set into two subsets such that the difference of subset sums is minimum
//make use of range--{},{all elements included in suabrray}
//range-2s1-->minimize
#include<iostream>
using namespace std;
//using resursion
int findMinRec(int arr[],int sumCalculated, int sumTotal, int i)
{
    if(i==0){
        //reached the last ele
        //(s1-s2)-s1)
        return abs((sumTotal-sumCalculated)-sumCalculated);
    }
//include arr[i] in first set or dont
        return min(findMinRec(arr, i-1, sumCalculated+arr[i], sumTotal), findMinRec(arr,i-1, sumCalculated, sumTotal));

}

int FindMin(int arr[], int n)
{
    // Compute total sum of elements
    int sumTotal = 0;
    for (int i = 0; i < n; i++)
        sumTotal += arr[i];
 
    // Compute result using recursive function
    return findMinRec(arr, n, 0, sumTotal);
}
 
int main()
{
    int arr[] = {1,3,5,6,10};
    return 0;
}