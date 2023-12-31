#include <bits/stdc++.h> 
int subArrayCount(vector<int> &arr, int k) {
    // Write your code here.
    int n = arr.size();
    int sum = 0;
    int count = 0;
    unordered_map <int, int> mp;
    mp[0] = 1;
    for(int i = 0; i<n; i++){
        sum = (sum+arr[i])%k;
        if(sum<0){
            sum+=k;
        }
        if(mp.find(sum)!=mp.end()){
            count = count + mp[sum];
        }
        mp[sum]++;
    }
    return count;

}
