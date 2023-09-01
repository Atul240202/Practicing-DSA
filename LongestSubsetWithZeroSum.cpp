// Brute force & Optimal approach using Map

#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
  // Write your code here
  // int n = arr.size();
  // int len = 0;
  // for(int i = 0; i<n; i++){
  //   int sum = 0;
  //   for(int j = i; j<n; j++){
  //     sum += arr[j];
  //     if(sum==0){
  //       len = max(len, j-i+1);
  //     }
  //   }
  // }
  // return len;

  int n = arr.size();
  int len = 0;
  unordered_map <int, int> mp;
  int sum = 0;
  for(int i = 0; i<n; i++){
    sum += arr[i];
    if(sum==0){
      len = i+1;
    } else {
      if(mp.find(sum)!=mp.end()){
        len = max(len, i-mp[sum]);
      } else {
        mp[sum] = i;
      }
    }
  }
  return len;

}

// Optimal approach using Set

#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(std::vector<int> arr) {
    int n = arr.size();
    int len = 0;
    std::set<int> sumSet;  // Use a set to store cumulative sums.

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum == 0) {
            len = i + 1;
        } else {
            // Check if the same sum has been encountered before
            if (sumSet.find(sum) != sumSet.end()) {
                len = std::max(len, i - *sumSet.find(sum));
            } else {
                // Store the sum in the set
                sumSet.insert(sum);
            }
        }
    }

    return len;
}
