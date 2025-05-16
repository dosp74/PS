#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n, vector<int>& fibo) {
    if (n == 0) return fibo[0];
    if (n == 1) return fibo[1];
    
    for (int i = 2; i <= n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    
    return fibo[n];
}

int main() {
    int n;
    cin >> n;
    
    vector<int> fibo(n + 1);
    
    fibo[0] = 0;
    fibo[1] = 1;
    
    cout << fibonacci(n, fibo);
    
    return 0;
}