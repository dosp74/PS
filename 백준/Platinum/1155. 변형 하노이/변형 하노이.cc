#include <bits/stdc++.h>
using namespace std;

// dp[from][to][n] = n개의 디스크를 from -> to로 옮길 때의 이동 횟수
long long dp[3][3][31]; // 디스크 인덱스는 1부터 시작

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    // 이동 우선순위
    // order[i] = {from, to}
    vector<pair<int, int>> order(6);
    for (int i = 0; i < 6; i++) {
        string s;
        cin >> s;
        order[i] = {s[0] - 'A', s[1] - 'A'}; // ex) A -> B = 0 -> 1
    }
    
    // 디스크가 1개일 때는 from에서 우선순위상 가장 먼저 등장하는 이동만 가능
    for (int i = 0; i < 6; i++) {
        int from = order[i].first;
        int to = order[i].second;
        // from에서 시작하는 이동이 정해졌는지 확인
        bool isDecided = false;
        
        for (int j = 0; j < 3; j++) {
            if (dp[from][j][1] != 0) {
                isDecided = true;
                
                break;
            }
        }
        
        if (!isDecided) {
            dp[from][to][1] = 1;
        }
    }
    
    // n >= 2
    for (int n = 2; n <= N; n++) {
        for (int from = 0; from < 3; from++) {
            for (int to = 0; to < 3; to++) {
                if (from == to) {
                    continue;
                }
                
                // 중간 기둥
                int mid = 3 - from - to;
                
                // 경우 1
                // from -> mid (n - 1개)
                // 큰 디스크 이동
                // mid -> to (n - 1개)
                if (dp[from][mid][n - 1] != 0 && dp[mid][to][n - 1] != 0) {
                    dp[from][to][n] = dp[from][mid][n - 1] + 1 + dp[mid][to][n - 1];
                }
                // 경우 2
                // 우선순위 때문에 왕복이 필요한 경우
                // from -> to (n - 1)
                // to -> from (n - 1)
                // 큰 디스크 이동
                // from -> to (n - 1)
                else if (dp[from][to][n - 1] != 0 && dp[to][from][n - 1] != 0) {
                    dp[from][to][n] = 2 * dp[from][to][n - 1] + dp[to][from][n - 1] + 2;
                }
            }
        }
    }
    
    if (dp[0][1][N] != 0) {
        cout << dp[0][1][N];
    }
    else {
        cout << dp[0][2][N];
    }
    
    return 0;
}