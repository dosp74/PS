#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int paper[100][100] = { 0 };
    
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        
        for (int j = 100 - y - 10; j < 100 - y; j++) {
            for (int k = x; k < x + 10; k++) {
                paper[j][k] = 1;
            }
        }
    }
    
    int result = 0;
    
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            result += paper[i][j];
        }
    }
    
    cout << result;
    
    return 0;
}