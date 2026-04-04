#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    deque<int> A(2 * N); // 컨베이어 벨트 내구도
    int aCnt = 0;
    
    for (int i = 0; i < 2 * N; i++) {
        cin >> A[i];
        
        if (A[i] == 0) {
            aCnt++;
        }
    }
    
    vector<bool> robots(N, false); // 로봇이 있는 위치
    int cnt = 0;
    
    while (true) {
        cnt++;
        
        // 1. 컨베이어 벨트 회전 (내구도 이동)
        int lastIdx = A.back();
        
        for (int i = 2 * N - 1; i > 0; i--) {
            A[i] = A[i - 1];
        }
        
        A[0] = lastIdx;
        
        for (int i = N - 1; i > 0; i--) {
            robots[i] = robots[i - 1];
        }
        
        robots[0] = false;
        robots[N - 1] = false;
        
        // 2. 로봇 이동
        for (int i = N - 2; i >= 0; i--) {
            if (robots[i] && !robots[i + 1] && A[i + 1] > 0) {
                robots[i] = false;
                robots[i + 1] = true;
                A[i + 1]--;
                
                if (A[i + 1] == 0) {
                    aCnt++;
                }
            }
            
            robots[N - 1] = false;
        }
        
        // 3. 로봇 컨베이어 벨트에 올리기
        if (A[0] != 0) {
            robots[0] = true;
            A[0]--;
            
            if (A[0] == 0) {
                aCnt++;
            }
        }
        
        // 4. 내구도 체크
        if (aCnt >= K) {
            break;
        }
    }
    
    cout << cnt;
    
    return 0;
}