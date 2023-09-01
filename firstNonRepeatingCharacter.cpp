#include <bits/stdc++.h> 
char firstNonRepeatingCharacter(string str) {

  // Write your code here
  int n = str.size();
  unordered_map<char,int> mp;
  for(auto i: str){
    mp[i] = mp[i]+1;
  }
  for(auto i: str){
    if(mp[i]==1) return i;
  }
  return str[0];
}
