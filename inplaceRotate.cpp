#include <bits/stdc++.h> 
void inplaceRotate(vector<vector<int>> &inputArray)
{
    // Write your code here.
    int n = inputArray.size();
    vector<vector<int>> temp(n, vector<int>(n, 0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            temp[n-1-j][i]=inputArray[i][j];
        }
    }
    inputArray = temp;
    
}
