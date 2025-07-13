#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    while (!(N == 0 && M == 0)) { // 두 포인터
        vector<int> A(N), B(M);
        
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        for (int i = 0; i < M; i++) {
            cin >> B[i];
        }
        
        int i = 0, j = 0, count = 0;
        
        while (i < N && j < M) {
            if (A[i] == B[j]) {
                count++;
                i++; j++;
            } else if (A[i] < B[j]) {
                i++;
            } else {
                j++;
            }
        }
        
        cout << count << "\n";
        
        cin >> N >> M;
    }
    
    return 0;
}