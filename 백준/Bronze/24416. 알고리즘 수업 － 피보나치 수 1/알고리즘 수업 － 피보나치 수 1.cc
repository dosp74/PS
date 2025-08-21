#include <iostream>
using namespace std;

int count1 = 0, count2 = 0;

long long fib(int n) {
    if (n == 1 || n == 2) {
        count1++;
        
        return 1;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}

long long fibonacci(int n) {
    long long f[41];
    f[1] = f[2] = 1;
    
    for (int i = 3; i <= n; i++) {
        count2++;
        f[i] = f[i - 1] + f[i - 2];
    }
    
    return f[n];
}

int main() {
    int n;
    cin >> n;
    
    long long tmp1 = fib(n);
    long long tmp2 = fibonacci(n);
    
    cout << count1 << " " << count2;
    
    return 0;
}