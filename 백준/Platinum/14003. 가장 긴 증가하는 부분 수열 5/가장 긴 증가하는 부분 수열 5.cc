#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> A(N);
    vector<int> lis;
    vector<int> idx(N);
    lis.reserve(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        
        auto it = lower_bound(lis.begin(), lis.end(), A[i]);
        int pos = it - lis.begin();
        
        if (it == lis.end()) {
            lis.push_back(A[i]);
        }
        else {
            *it = A[i];
        }
        
        idx[i] = pos;
    }
    
    int length = lis.size();
    
    cout << length << "\n";
    
    vector<int> answer;
    answer.reserve(length);
    
    int target = length - 1;
    
    for (int i = N - 1; i >= 0; i--) {
        if (idx[i] == target) {
            answer.push_back(A[i]);
            target--;
        }
        
        if (target < 0) {
            break;
        }
    }
    
    reverse(answer.begin(), answer.end());
    
    for (int x : answer) {
        cout << x << " ";
    }
    
    return 0;
}