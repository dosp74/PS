#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    map<long long, long long> m;
    for (int i = 0; i < N; i++) {
        long long number;
        cin >> number;
        m[number]++;
    }
    
    long long cur = INT_MIN;
    long long answer;
    
    for (const auto& p : m) {
        if (p.second > cur) {
            cur = p.second;
            answer = p.first;
        }
    }
    
    cout << answer;
    
    return 0;
}