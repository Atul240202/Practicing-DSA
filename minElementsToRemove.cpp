#include <bits/stdc++.h> 
int minElementsToRemove(vector<int> &arr)
{
	// Write your code here.
	int n = arr.size();
	map<int, int> newMap;
	for(int i = 0;i<n; i++){
		newMap[arr[i]] = i;
	}
	return n-newMap.size();
}
