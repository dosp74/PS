#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    int son = numer1 * denom2 + denom1 * numer2;
    int mom = denom1 * denom2;
    
    int gcdValue = gcd(son, mom);
    son /= gcdValue;
    mom /= gcdValue;
    
    vector<int> result = {son, mom};
    
    return result;
}