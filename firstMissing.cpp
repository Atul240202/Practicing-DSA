#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    for(int i = 0; i<n; i++){
        int element = arr[i];
        if(arr[i]>0 && arr[i]<=n){
            int elementHolder = element - 1;
            if (arr[elementHolder]!=element){
                swap(arr[elementHolder], arr[i]);
                i--;
            }
        }
    }
    for(int i = 0; i<n; i++){
        if(i+1 != arr[i]) return i+1;
    }
    return n+1;
    
}
