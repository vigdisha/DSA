// Sort An Array of 0s, 1s and 2s\\
/*three pointer
// low = 0..low-1
// mid= low..mid-1
// high = high...n-1

//mid to high is unsorted
void sortArray(vector<int>& arr, int n)
{
int low =0;

int high = n-1;
//only mid iterates
for(int i=0;i<n&i<=high){
    if(arr[i]==1){
        swap(arr[l],arr[i]);
        l++;
    i++;
    }
    else if(arr[i]==2){
        swap(arr[i], arr[high]);
        high--;

    }
    else{
        i++;
    }
}

}
