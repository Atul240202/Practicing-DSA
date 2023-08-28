#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    int n = message.size();
    string ans;
    int count = 1;
    for(int i = 0; i<n; i++){
        if(message[i]==message[i+1]){
            count++;
        }
        else if(message[i]!=message[i+1]){
            ans = ans + message[i] + to_string(count);
            count = 1;
        }
    }
    return ans;
}
