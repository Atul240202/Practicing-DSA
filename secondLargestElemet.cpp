#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(), arr.end());
    int largest = arr[n-1];
    for(int i = n-2; i>=0; i--){
        if(arr[i]!=largest){
            return arr[i];
        }
    }
    return -1;
    // return arr[n-2];
}
