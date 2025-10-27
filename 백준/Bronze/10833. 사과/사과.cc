#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> people(N), apples(N);
    for (int i = 0; i < N; i++) {
        cin >> people[i] >> apples[i];
    }
    
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        cnt += apples[i] % people[i];
    }
    
    cout << cnt;
    
    return 0;
}