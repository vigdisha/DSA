// Find the majority element in the array.
// A majority element in an array A[] of size n is an element that appears
// more than n/2 times.

#include <iostream>
using namespace std;
int findMajority(int arr[], int n)
{
    int maxCount = 0;
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j]){
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }

    if (maxCount > n / 2)
    {
        cout << arr[index] << endl;
    }
    else
    {
        cout << "no majority element";
    }
    return 0;
}
int main()
{
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling
    findMajority(arr, n);

    return 0;
}