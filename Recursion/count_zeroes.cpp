#include<iostream>
using namespace std;

int helper(int n, int c){
    if(n == 0){
        return c;
    }
    int rem = n%10;
    if(rem ==0){
        return helper(n/10,c+1);
    }
    else{
        return helper(n/10,c);
    }
}
int count(int n){
    return helper(n,0);
}

int main(){
    cout<<count(23400);
return 0; 
}