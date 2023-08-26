#include<iostream>
using namespace std;

int Sum(int n){
    if(n == 0){
        return 0;
    }

    return ((n%10) + Sum(n/10));

}

int main(){
    cout<<Sum(55);
}