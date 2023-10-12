#include<iostream>
using namespace std;

bool ispalindrome(vector<int> &n){
    int count  = 0;
    int n = n.size();
    int orginial  = n;
    int rev =0;
    
    while(n>0){
        int digit = n % 10;
        rev = rev * 10  + digit;
        n /=10;
    }
    return (orginal == rev);
    
}

int main()
{
    return 0;
}