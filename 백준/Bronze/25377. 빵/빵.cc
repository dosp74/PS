#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int answer = -1;
    
    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        
        if (A <= B) {
            if (answer == -1 || B < answer) {
                answer = B;
            }
        }
    }
    
    cout << answer;
    
    return 0;
}