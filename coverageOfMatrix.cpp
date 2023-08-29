#include <bits/stdc++.h> 
int coverageOfMatrix(vector<vector<int>> &mat) {
    // Write your code here.
    int row = mat.size();
    int col = mat[0].size();
    int totalSum = 0;
    for(int i = 0; i<row;i++){
        for(int j = 0; j<col; j++){
            
            if(mat[i][j]==0){
                int sum = 0;
                if(i>0 && mat[i-1][j]==1)sum++;
                if(i<row-1 && mat[i+1][j]==1)sum++;
                if(j>0 && mat[i][j-1]==1)sum++;
                if(j<col-1 && mat[i][j+1]==1)sum++;
                totalSum += sum;
            }
            
        }
    }
    return totalSum;
}
