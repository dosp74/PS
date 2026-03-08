#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    unsigned long long sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    cout << sum;
    
    return 0;
}