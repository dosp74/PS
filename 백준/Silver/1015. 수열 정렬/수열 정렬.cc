#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++) {
        v.push_back({A[i], i});
    }
    
    sort(v.begin(), v.end());
    
    vector<int> P(N);
    
    for (int j = 0; j < N; j++) {
        int originalIndex = v[j].second;
        P[originalIndex] = j;
    }
    
    for (int i = 0; i < N; i++) {
        cout << P[i] << " ";
    }
    
    return 0;
}