#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
    int n = arr.size();
    for(int i = 0; i<n; i++){        
        int leftSum = 0;
        for(int j=0; j<i; j++){
            leftSum += arr[j];
        }
        int rightSum = 0;
        for(int j=i+1; j<n; j++){
            rightSum += arr[j];
        }

        if(leftSum == rightSum) return i;
    }
    return -1;
}
