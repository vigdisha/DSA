// Replace every array element by multiplication of previous and next
// a) The First element is replaced by the multiplication
//  of the first and second. 
// b) The last element is replaced by multiplication
//  of the last and second last.
#include<iostream>
using namespace std;
void modify(int arr[], int n){
    if(n <=1){
        return;
    }

    int prev = arr[0];
    arr[0] = arr[0] *arr[1];

    for(int i=1; i<n-1 ;i++){
        int curr = arr[i];
        //update curr
        arr[i] = prev *arr[i+1];

        //update prev
        prev = curr;
    }
    //update last 
    arr[n-1] = prev *arr[n-1];
    }



int main()
{
     int arr[] = {2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    modify(arr, n);
    for (int i=0; i<n; i++)
      cout << arr[i] << " ";
  return 0;
}