#include<iostream>
using namespace std;

void insert(int A[], int n){
  for(int i=1; i<n;i++){
    int key = A[i];
    int j = i-1;
    while(j>0 && A[j] > key){
        A[j+1]  = A[j];
        j--;
    }
    A[j+1] = key;
  }
}
// print array
void printArray(int A[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << "  " << A[i];
  }
  cout << "\n";
}

int main() {
  int A[] = {-2, 45, 0, 11, -9};
  
  // find array's length
  int n = sizeof(A) / sizeof(A[0]);
  
  insert(A, n);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(A, n);
}