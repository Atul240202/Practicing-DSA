#include <bits/stdc++.h> 
vector<vector<string>> getGroupedAnagrams(vector<string> &inputStr, int n)
{
    // Write your code here.
    unordered_map<string, vector<string>> mp;
    for(auto x: inputStr){
        string word = x;
        sort(word.begin(), word.end());
        mp[word].push_back(x);
    }
    vector< vector<string> > ans;
    for(auto x: mp){
        ans.push_back(x.second);
    }
    return ans;
}
