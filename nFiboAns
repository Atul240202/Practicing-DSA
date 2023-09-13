#include<bits/stdc++.h>
using namespace std;

int getAns(int n){
        // int first = 0;
        // int second = 1;
        // int i = 1;
        // int ans;
        // while(i<n){
        //         ans = first + second;
        //         i++;
        //         first = second;
        //         second = ans;
        // }
        // if(n==1) return 1;
        // return ans;
        if(n==0 || n==1) return n;
        int ans = getAns(n-1) + getAns(n-2);
        return ans;
}

int main()
{
        int n;
        cin >> n;
        int result = getAns(n);
        if (result != -1) {
                cout << result << endl;
        }
        return 0;
}
