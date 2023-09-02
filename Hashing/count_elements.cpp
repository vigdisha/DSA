#include<iostream>
using namespace std;



int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

//pre compute
int hash[13];
for(int  i=0;i<n;i++){
    hash[arr[i]] += 1;
    }
//q is amount of each ele

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }

    return 0;
}















/*
5 ele
1,3,2,1,3
how many times each appear

*/