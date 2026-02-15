#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    long long M;
    cin >> N >> M;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int left = 0, right = 0;
    long long sum = 0;
    int cnt = 0;
    
    while (true) {
        if (sum >= M) {
            sum -= A[left];
            left++;
        }
        else if (right == N) {
            break;
        }
        else {
            sum += A[right];
            right++;
        }
        
        if (sum == M) {
            cnt++;
        }
    }
    
    cout << cnt;
    
    return 0;
}