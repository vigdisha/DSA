#include <iostream>
using namespace std;

// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {
  
  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}

// Print the array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

// Driver program
int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
// #include<iostream>
// using namespace std;

// void merge(int a[], int l, int r, int mid){
//     int b[r-l-1];
//     int i=l;
//     int j= mid+1;
//     int k = l;
//     while(i<=mid && j<=r){
//         if(a[i]<a[j]){
//             b[k]  = a[i];
//             i++;
//         }
//         else{
//             b[k]  = a[j];
//             j++;
//         }
//         k++;
//         if(i>mid){
//             while(j<=r){
//                 b[k]  = a[j];
//                 k++;
//                 j++;

//             }
//         }
//             else{
//                 while(i<mid){
//                     b[k] = a[i];
//                     k++;
//                     i++;

//                 }
//             }
//         }
//     }


// void mergesort(int a[],int l, int r){
//     //divide into subarray
//     if(l<r){
//     int mid = (l+r)/2;

//     mergesort(a,l,mid);
//     mergesort(a,l,mid+1);
//     merge(a,l,mid,r);
//     }
// }

// void printArray(int a[], int n) {
//   for (int i = 0; i < n; ++i) {
//     cout << "  " << a[i];
//   }
//   cout << "\n";
// }

// int main() {
//   int a[] = {-2, 45, 0, 11, -9};
  
//   // find array's length
//   int n = sizeof(a) / sizeof(a[0]);
  
//   mergesort(a, 0 ,n-1);
  
//   cout << "Sorted Array in Ascending Order:\n";  
//   printArray(a, n);
// }

}