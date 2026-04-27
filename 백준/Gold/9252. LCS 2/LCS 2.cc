#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string A, B;
    cin >> A >> B;
    
    int n = A.size();
    int m = B.size();
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (A[i - 1] == B[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    cout << dp[n][m] << "\n";
    
    string answer;
    
    int i = n;
    int j = m;
    
    while (i > 0 && j > 0) {
        if (A[i - 1] == B[j - 1]) {
            answer.push_back(A[i - 1]);
            i--;
            j--;
        }
        else {
            if (dp[i - 1][j] >= dp[i][j - 1]) {
                i--;
            }
            else {
                j--;
            }
        }
    }
    
    reverse(answer.begin(), answer.end());
    
    if (!answer.empty()) {
        cout << answer;
    }
    
    return 0;
}