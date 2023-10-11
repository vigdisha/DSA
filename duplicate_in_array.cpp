#include <bits/stdc++.h>
//in constant space and time
  // -<--------using fast slow cycle detection in linkdlist----->
int findDuplicate(vector<int> &nums, int n){
   int tortoise = nums[0];
    int hare = nums[0];

    // Phase 1: Move the hare and tortoise to find the intersection point
    do {
        tortoise = nums[tortoise];
        hare = nums[nums[hare]];
    } while (tortoise != hare);

    // Phase 2: Move the tortoise to find the entrance to the cycle
    tortoise = nums[0];
    while (tortoise != hare) {
        tortoise = nums[tortoise];
        hare = nums[hare];
    }

    // The intersection point is the duplicate number
    return tortoise;
}
// <-- linkedlist cycle detection


// int duplicate(vector<int> arr){
//     int res
//     int xor = 0;

//     for(int num : arr){
//         xor ^= res;
//     }

//     for(int i=0; i<n; i++){
//         res ^= i;
//     }
// }