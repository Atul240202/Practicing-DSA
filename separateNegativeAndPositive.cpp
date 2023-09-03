#include <bits/stdc++.h>
using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &nums) {
    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        if (nums[low] < 0 && nums[high] < 0) {
            low++;
        } else if (nums[low] > 0 && nums[high] < 0) {
            swap(nums[low], nums[high]);
            low++;
            high--;
        } else if (nums[low] > 0 && nums[high] > 0) {
            high--;
        } else {
            low++;
            high--;
        }
    }

    return nums;
}
