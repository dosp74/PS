#include <bits/stdc++.h>
using namespace std;

double comb(int n, int r) { // nCr
    double res = 1;
    
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    
    return res;
}

double primeProb(double p) {
    int primes[] = {2, 3, 5, 7, 11, 13, 17};
    double prob = 0;
    
    for (int i = 0; i < 7; i++) {
        int k = primes[i];
        prob += comb(18, k) * pow(p, k) * pow(1 - p, 18 - k);
    }
    
    return prob;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double A, B;
    cin >> A >> B;
    
    A /= 100.0;
    B /= 100.0;
    
    double pA = primeProb(A);
    double pB = primeProb(B);
    
    double result = 1 - (1 - pA) * (1 - pB);
    
    cout << fixed << setprecision(16) << result;
    
    return 0;
}