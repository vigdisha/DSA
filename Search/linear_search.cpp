#include<iostream>
using namespace std;

int Search(int arr[],int size, int key){

    for(int i=0; i<size;i++){
        if(arr[i] == key){
            return i;
        }
      
    }
    return 0;
}

int main(){
    int arr[4]={1,4,6,8};
    cout<<Search(arr,4,8);

}