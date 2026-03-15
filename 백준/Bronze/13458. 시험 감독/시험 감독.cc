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
    
    int B, C;
    cin >> B >> C;
    
    long long result = 0;
    
    result += N;
    
    for (int i = 0; i < N; i++) {
        if (A[i] <= B) {
            continue;
        }
        
        int num = (A[i] - B) % C == 0 ? (A[i] - B) / C : (A[i] - B) / C + 1;
        result += num;
    }
    
    cout << result;
    
    return 0;
}