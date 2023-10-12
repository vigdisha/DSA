//Given a string s, return the number of palindromic substrings in it.

// A string is a palindrome when it reads the same backward as forward.

// A substring is a contiguous sequence of characters within the string.

#include<iostream>
using namespace std;
int palindrome(string s){
    int count =0;
    int n = s.length();
    
    for(int center=0; center<2 * i + 1;count++)
    int left = center /2;
    int right = left + center %2;

    while(left>=0 && right<n &&s[left] == s[right]){
        count++;
        left--;
        right++;
    }
    return count;
    }

int main()
{
    return 0;
}