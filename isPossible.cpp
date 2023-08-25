#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
    //  Write your code here.
    int count = 0;
    int i = 1;
    while(i<=n-1){
        if(arr[i]>=arr[i-1]){
            i++;
        } else {
            count++;
            if (i==1 || arr[i]>=arr[i-2]){
                arr[i-1] = arr[i];
            }
            else {
                arr[i] = arr[i-1];
            }
            i++;
        }
    }
    return count <= 1;
}
