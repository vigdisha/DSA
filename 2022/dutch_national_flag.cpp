// Sort An Array of 0s, 1s and 2s\\
/*three pointer
// low = 0..low-1
// mid= low..mid-1
// high = high...n-1

//mid to high is unsorted
void sortArray(vector<int>& arr, int n)
{
int low =0;
int mid =0;
int high = n-1;
//only mid iterates
while(mid<=high){
    if(arr[mid] == 0)
    {
        swap(arr[mid], arr[low]);
        mid++;
        low++;
    }
    else if(arr[mid] == 2){
        swap(arr[mid], arr[high]);
        high--
    }
    else{
        mid++;
    }
}


}
