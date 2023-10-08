#include<iostream>
using namespace std;

bool isPrime(int n){

    if(n<=1){
        return false;
    }
    if(n==2 || n==3){
        return true;
    }

    if(n%2 == 0 ||n%3 == 0){
        return true;
    }

    for(int i=5; i*i<= n;i+6)
        if(n%i==0 ||n%(i+2)==0)
        return false;
        
    
    
}








int main()
{
   isPrime(11) ? cout << "true\n" : cout << "false\n";
    return 0;
}