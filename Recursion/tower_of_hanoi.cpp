// recursion problem
#include<iostream>
using namespace std;

void TOH(int n , int A, int B, int C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"move from "<<A<<" to "<< C <<endl;;
        TOH(n-1,B,A,C);
        //gives steps acc to which
        //the disks should move
    }
}
int main(){
    TOH(3,1,2,3);

}