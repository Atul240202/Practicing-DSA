#include <iostream>
using namespace std;

int ansFactorial(int n) {
    if (n < 0) {
        return -1; // Return an error code to indicate failure
    }
    if (n == 0 || n == 1) return 1;
    return n * ansFactorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    int result = ansFactorial(n);
    if (result != -1) {
        cout << result << endl;
    }
    return 0;
}
