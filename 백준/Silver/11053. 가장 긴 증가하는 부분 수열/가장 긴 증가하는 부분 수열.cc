#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // dp[i]는 i번째 원소를 마지막으로 하는 가장 긴 증가하는 부분 수열의 길이
    vector<int> dp(N, 1);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (A[j] < A[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    
    cout << *max_element(dp.begin(), dp.end());
    
    return 0;
}