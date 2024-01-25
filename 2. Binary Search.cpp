//------------------------------------------------------------------------------
// 1. Time Complexity:
//     1. Best TC= O(1)
//     2. Average TC= O(logn)
//     3. Wrost TC= O(logn)

// 2. Space Complexity: O(1)
--------------------------------------------------------------------------------
// Algorithm for Binary Search in C++

//     while(left<=right)
//           mid=left + (right – left)/2;
//     if(a[mid]<item)
//           left=mid+1;
//     else if(a[mid]>item)
//           right=mid-1;
//     If found return index+1
//     Else return -1
--------------------------------------------------------------------------------
// Method 1: Recursive approach

#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int item){
    if(right>=left){
        int mid=(left+right)/2;
        
        if(arr[mid] == item){
            return mid;
        }
        else if(arr[mid] < item){
            return binarySearch(arr, mid+1, right, item);
        }
        else if(arr[mid] > item){
            return binarySearch(arr, left, mid-1, item);
        }
    }
    else
        return -1;
}

int main()
{
    int arr[] = {3,5,7,9,11,13,15,17,19,21};
    
    int left = 0;
    
    int len = sizeof(arr)/sizeof(arr[0]);
    int right = len-1;
    
    int item = 15;
    
    int index = binarySearch(arr, left, right, item);
    
    if(index >=0)
        cout<<item<<" is present at index: "<<index;
    else 
        cout<<item<<" is not found";
        
    return 0;
}
// -----------------------------------------------------------------------------

// Method 2: Iterative approach























