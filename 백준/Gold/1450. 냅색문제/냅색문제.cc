#include <bits/stdc++.h>
using namespace std;

int N;
long long C;
vector<long long> weights;
vector<long long> leftSums;
vector<long long> rightSums;

void makeSums(int start, int end, long long sum, vector<long long>& sums) {
    if (sum > C) {
        return;
    }
    
    if (start == end) {
        sums.push_back(sum);
        
        return;
    }
    
    // 현재 물건을 선택하지 않는 경우
    makeSums(start + 1, end, sum, sums);
    
    // 현재 물건을 선택하는 경우
    makeSums(start + 1, end, sum + weights[start], sums);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> C;
    
    weights.resize(N);
    
    for (int i = 0; i < N; i++) {
        cin >> weights[i];
    }
    
    // Meet in the middle 시작
    
    // 1. 전체 문제를 두 부분으로 분할(2^30 -> 2^15 + 2^15)
    int mid = N / 2;
    
    // 2. 왼쪽 절반의 모든 부분집합 합 계산
    makeSums(0, mid, 0, leftSums);
    // 3. 오른쪽 절반의 모든 부분집합 합 계산
    makeSums(mid, N, 0, rightSums);
    
    // 두 절반의 결과를 결합(Meet in the middle 핵심)
    sort(rightSums.begin(), rightSums.end());
    
    long long answer = 0;
    
    for (long long leftSum : leftSums) {
        long long remain = C - leftSum;
        
        // 오른쪽 절반에서 remain 이하인 개수 찾기(이분 탐색)
        answer += upper_bound(rightSums.begin(), rightSums.end(), remain) - rightSums.begin();
    }
    
    cout << answer;
    
    return 0;
}