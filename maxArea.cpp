// int maxArea(vector<int>& height) {
//     // Write your code here.
//     int n = height.size();
//     int ans = 0;
//     for(int i=0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             int length = min(height[i], height[j]);
//             int breadth = j-i;
//             int firstAns = length * breadth;
//             ans = max(ans, firstAns);
//         }
//     }
//     return ans;
// }

int maxArea(vector<int>& height) {
    // Write your code here.
    int n = height.size();
    int ans = 0;
    int low = 0;
    int high = n-1;
    while(low<high){
        int length = min(height[low], height[high]);
        int breadth = high - low;
        int firstAns = length*breadth;
        ans = max(ans, firstAns);
        if(height[low]<height[high]){
            low++;
        } else {
            high--;
        }
    }
    return ans;
}
