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
    
    vector<int> up(N, 1);
    vector<int> down(N, 1);
    
    // up[i]: A[i]를 마지막으로 하는 LIS 길이
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (A[j] < A[i]) {
                up[i] = max(up[i], up[j] + 1);
            }
        }
    }
    
    // down[i]: A[i]를 시작으로 하는 LDS 길이
    for (int i = N - 1; i >= 0; i--) {
        for (int j = N - 1; j > i; j--) {
            if (A[j] < A[i]) {
                down[i] = max(down[i], down[j] + 1);
            }
        }
    }
    
    int answer = 0;
    
    for (int i = 0; i < N; i++) {
        answer = max(answer, up[i] + down[i] - 1);
    }
    
    cout << answer;
    
    return 0;
}