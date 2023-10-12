#include<iostream>
using namespace std;


 bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long rev = 0;
        long long num = x;

        while(num != 0){
            int digit =num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }
        return (rev == x);
    }


int main()
{
    int x;
    cin>>x;
    cout<<isPalindrome(x);
    return 0;
}