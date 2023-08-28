#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
    int openingCount=0;
    int ans = 0;
    int n = pattern.size();
    for(int i = 0; i<n; i++){
        if(pattern[i]=='('){
            openingCount++;
        } else if(pattern[i]==')'){
            if(openingCount>0){
                openingCount--;
            }
            else {
                ans++;
            }
        }
    }
    return openingCount+ans;
}
