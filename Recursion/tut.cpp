#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}


int main()
{
    int x=5,y=4;
    swap(&x,&y);
    cout<<"value of a"<<x<<"value of b"<<y;
    return 0;
    
}