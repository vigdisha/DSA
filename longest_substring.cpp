//longest palindromic substring
// #include <vector>
// #include <string>
// #include <unordered_map>
// using namespace std;

// class Solution {
// public:
//     string longestPalindrome(string input) {
//         int n = input.length();
//         unordered_map<int, vector<string>> len;

//         string longestPalindrome;
//         int maxLength = 0;

//         for (int center = 0; center < 2 * n - 1; center++) {
//             int left = center / 2;
//             int right = left + center % 2;

//             while (left >= 0 && right < n && input[left] == input[right]) {
//                 string palindrome = input.substr(left, right - left + 1);
//                 int palindromeLength = right - left + 1;

//                 if (palindromeLength > maxLength) {
//                     maxLength = palindromeLength;
//                     longestPalindrome = palindrome;
//                 }

//                 len[palindromeLength].push_back(palindrome);

//                 left--;
//                 right++;
//             }
//         }

//         return longestPalindrome;
//     }
// };
// //gives tle

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestPalindrome(string input) {
        int n = input.length();
        if (n == 0) return "";

        // Create a table to store the palindrome information
        vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));

        int maxLength = 1;  // Length of the longest palindrome found so far
        int start = 0;      // Starting index of the longest palindrome

        // All substrings of length 1 are palindromes
        for (int i = 0; i < n; i++) {
            isPalindrome[i][i] = true;
        }

        // Check for palindromes of length 2
        for (int i = 0; i < n - 1; i++) {
            if (input[i] == input[i + 1]) {
                isPalindrome[i][i + 1] = true;
                maxLength = 2;
                start = i;
            }
        }

        // Check for palindromes of length greater than 2
        for (int length = 3; length <= n; length++) {
            for (int i = 0; i < n - length + 1; i++) {
                int j = i + length - 1;

                if (input[i] == input[j] && isPalindrome[i + 1][j - 1]) {
                    isPalindrome[i][j] = true;
                    if (length > maxLength) {
                        maxLength = length;
                        start = i;
                    }
                }
            }
        }

        return input.substr(start, maxLength);
    }
};