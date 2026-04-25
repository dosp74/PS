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
    
    // dp[i]: A[i]를 마지막으로 하는 LIS 길이
    vector<int> dp(N, 1);
    
    // prev[i]: LIS에서 A[i] 바로 앞 원소의 인덱스
    vector<int> prev(N, -1);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (A[j] < A[i] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
                prev[i] = j;
            }
        }
    }
    
    // 가장 긴 LIS의 길이와 마지막 인덱스 찾기
    int maxLength = 0;
    int lastIdx = 0;
    
    for (int i = 0; i < N; i++) {
        if (dp[i] > maxLength) {
            maxLength = dp[i];
            lastIdx = i;
        }
    }
    
    // 역추적
    vector<int> answer;
    for (int i = lastIdx; i != -1; i = prev[i]) {
        answer.push_back(A[i]);
    }
    
    reverse(answer.begin(), answer.end());
    
    cout << maxLength << "\n";
    
    for (int x : answer) {
        cout << x << " ";
    }
    
    return 0;
}