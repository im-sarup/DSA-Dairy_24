//------------------------------------------------------------------------------
// 1. Time Complexity:
//      1. Best Case: O(1)
//      2. Average Case: O(n)
//      3. Worst Case: O(n)
    
// 2. Space Complacity: O(1)

// 3. Average Comparision: (n+1)/2;
// -----------------------------------------------------------------------------
// Method 1: Simple Method

//Searching Operation: Linear Search for 'Interger' Data type

// #include <iostream>
// using namespace std;

// void LinearSearch(int arr[], int len, int item){
//     for(int i=0; i<len; i++){
//         if(arr[i] == item){
//             cout<<item <<" present at index: " <<i;
//             return;
//         }
//     }
//     cout<<"Not found";
// }

// int main()
// {
//     int arr[] = {7, 4, 31, 23, 71};          // Linear serch for 'Int' Data type
//     int len = sizeof(arr)/sizeof(arr[0]);    //Calculating length of the array

//     int item = 31;
//     LinearSearch(arr, len, item);            //Creat a function 'LinearSearch'

//     return 0;
// }
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- 
//Searching Operation: Linear Search for ;Charcter' Data type

// #include <iostream>
// using namespace std;
// void LinearSearch(char arr[], int len, char item){
//     for(int i=0; i<len; i++){
//         if(arr[i] == item){
//             cout<<item <<" present at index: " <<i;
//             return;
//         }
//     }
//     cout<<"Not found";
// }
// int main()
// {
//     char arr[] = {'s', 'a', 'r', 'u', 'p'}; // Linear serch for 'Char' Data type
//     int len = sizeof(arr)/sizeof(arr[0]);   //Calculating length of the array
//     char item = 'r';
//     LinearSearch(arr, len, item);           //Creat a function 'LinearSearch'
//     return 0;
// }
// -----------------------------------------------------------------------------
// Method 2: Recursion Method

#include<iostream>
using namespace std;

int LinearSearch(int arr[], int index, int item){
    if(arr[index] ==  item){
        return index;
    }
    else if(index == -1)    //it executi when the idet is not present in the array, i.e. index value is less than 0
        return -1;
        
    return LinearSearch(arr, index-1, item);    // recursion operation execute untill the value find or array ends from last to fast iterate
}

int main(){
    int arr[] = {7, 4, 31, 23, 71};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    int item = 31;
    int index = LinearSearch(arr, len-1, item); //len-1 => 5(items) - 1=> upto 4 index (0,1,2,3,4)
    
    if(index>=0)    //when index value is more than or equzl to 0
        cout<<item<<" present at index: "<<index;
    else            //when index value is less than 0, i.e., item is not exist in the given array
        cout<<"Not Found";
        
    return 0;
}
//------------------------------------------------------------------------------

