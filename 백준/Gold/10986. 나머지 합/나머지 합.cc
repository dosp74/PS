#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    vector<long long> cnt(M, 0);
    
    long long answer = 0;
    long long sum = 0;
    
    cnt[0] = 1;
    
    for (int i = 1; i <= N; i++) {
        long long x;
        cin >> x;
        
        sum += x; // 1번부터 i번까지의 누적 합
        
        int remainder = sum % M;
        
        // 이전에 나왔던 누적 합 중 현재 누적 합과 나머지가 같은 것들의 개수
        long long sameCnt = cnt[remainder];
        
        answer += sameCnt;
        cnt[remainder]++;
    }
    
    cout << answer;
    
    return 0;
}