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
    
    sort(A.begin(), A.end());
    
    int answer = 0;
    
    do {
        int sum = 0;
        
        for (int i = 0; i < N - 1; i++) {
            sum += abs(A[i] - A[i + 1]);
        }
        
        answer = max(answer, sum);
    } while (next_permutation(A.begin(), A.end()));
    
    cout << answer;
    
    return 0;
}