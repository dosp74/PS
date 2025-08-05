#include <iostream>
using namespace std;

const int MAX = 15;

int main() {
    int apart[MAX][MAX] = { 0 };
    int roomNumber = 1;
    
    for (int i = 0; i < MAX; i++) { // 0층 설정
        apart[0][i] = roomNumber++;
    }
    
    for (int i = 1; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            for (int k = j; k >= 0; k--) {
                apart[i][j] += apart[i - 1][k];
            }
        }
    }
    
    int T, k, n;
    cin >> T;
    
    while (T--) {
        cin >> k >> n; // k는 층 수, n은 호 수
        cout << apart[k][n - 1] << "\n";
    }
    
    return 0;
}