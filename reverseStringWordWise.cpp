#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    int start = 0;
    int l = input.length();
    int end = l-1;
    while(start<end){
        swap(input[start], input[end]);
        start++;
        end--;
    }
    start = 0;
    for(int i = 0; i<=l; i++){
        if(input[i] == ' ' || i == l){
            end = i-1;
            while(start<end){
                swap(input[start], input[end]);
                start++;
                end--;
            }
            start = i+1;
        }
    }
    return input;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
