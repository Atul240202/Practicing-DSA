#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
	int low = 0;
	int high = n-1;
	int count = 0;
	while(low<high){
		if(arr[low]+arr[high]==target){
			count++;
			low++;
			high--;
		} 
		else if (arr[low]+arr[high]<target) low++;
		else if (arr[low]+arr[high]>target) high--;
	}
	if(count == 0) return -1;
	return count;
}
