#include <bits/stdc++.h> 
bool isSubSequence(string str1, string str2) {
    // Write your code here.
    int j = 0;
    int i = 0;
    int count = 0;
    int n = str1.size();
    int m = str2.size();
    while(i<m){
        if(str1[j]!=str2[i]){
            i++;
        } else{
            count++;
            i++;
            j++;
        }
    }
    if(count==n) return true;
    else return false;
}
