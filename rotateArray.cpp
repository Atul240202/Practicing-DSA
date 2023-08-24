vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    vector<int> temp(n);
    for (int i = 0; i<k; i++){
      temp[n+i-k] = arr[i];
    }
    for (int i=k; i<n; i++){
      temp[i-k] = arr[i];
    }
    return temp;
}
