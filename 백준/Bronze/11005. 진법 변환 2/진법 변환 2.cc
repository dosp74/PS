#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;
    
    string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result;
    
    while (N > 0) {
        result += digits[N % B];
        N /= B;
    }
    
    reverse(result.begin(), result.end());
    
    cout << result;
    
    return 0;
}