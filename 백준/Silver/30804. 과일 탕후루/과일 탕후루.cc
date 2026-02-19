#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    
    int cnt[10] = { 0 }; // 과일 개수 카운트
    int left = 0;
    int kind = 0; // 서로 다른 과일 종류 수
    int answer = 0;
    
    for (int right = 0; right < N; right++) {
        if (cnt[S[right]] == 0) {
            kind++;
        }
        
        cnt[S[right]]++;
        
        while (kind > 2) {
            cnt[S[left]]--;
            
            if (cnt[S[left]] == 0) {
                kind--;
            }
            
            left++;
        }
        
        answer = max(answer, right - left + 1);
    }
    
    cout << answer;
    
    return 0;
}