#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    string S;
    cin >> N >> M >> S;
    
    int answer = 0;
    int cnt = 0; // 연속된 IOI 개수
    
    for (int i = 1; i < M - 1; i++) {
        if (S[i - 1] == 'I' && S[i] == 'O' && S[i + 1] == 'I') {
            cnt++;
            
            if (cnt >= N) {
                answer++;
            }
            
            i++; // 다음 I로 이동
        }
        else {
            cnt = 0;
        }
    }
    
    cout << answer;
    
    return 0;
}