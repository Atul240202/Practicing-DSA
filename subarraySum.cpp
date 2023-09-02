class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int> prefixSum(n);
        prefixSum[0] = nums[0];
        for(int i = 1; i<n; i++){
            prefixSum[i] = nums[i] + prefixSum[i-1];
        }
        unordered_map<int, int> mp;
        for(int i = 0; i<n; i++){
            if(prefixSum[i]==k) count++;
            if(mp.find(prefixSum[i]-k)!=mp.end()){
                count = count + mp[prefixSum[i]-k];
            }
            mp[prefixSum[i]]++;
        }
        return count;
    }
};
