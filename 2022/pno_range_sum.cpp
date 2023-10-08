// Given a range [l, r], the task is to
//  find the sum of all the prime numbers within that range.

#include<iostream>
using namespace std;

bool checkPrime(int n){
    if(n ==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }

}


int primesum(int l, int r){

int sum =0;

for(int i=r;i>=l;i--){

bool isPrime = checkPrime(i);
if (isPrime) {
    sum = sum +i;
}
}
return sum;

}
int main()
{
     int l = 4, r = 13;
 
    // Call the method with l and r
    cout <<primesum(l, r);
    return 0;
}