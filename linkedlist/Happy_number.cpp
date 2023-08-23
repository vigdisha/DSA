// A happy number is a number defined by the following process:

// Starting with any positive integer, replace the number by the sum of the squares of its digits.
// Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
// Those numbers for which this process ends in 1 are happy.
// Return true if n is a happy number, and false if not.

 

// Example 1:

// Input: n = 19
// Output: true
// Explanation:
// 1^2 + 9^2 = 82
// 8^2 + 2^2 = 68
// 6^2 + 8^2 = 100
// 1^2 + 0^2 +0^2 = 1
// Example 2:

// Input: n = 2
// Output: false
 #include<iostream>
 using namespace std;
class Solution {
public:
    int findSquare(int number) {
        int ans = 0;
        while (number > 0) {
            //solves for
            //124 = 1^2 +2^2 + 4^2
            int rem = number % 10;
            ans += rem * rem;
            number = number / 10; // Corrected this line
        }
        return ans;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        do {
            slow = findSquare(slow);
            fast = findSquare(findSquare(fast));
        } while (fast != slow);

        if (slow == 1) {
            return true;
        } else {
            return false;
        }
    }
};


