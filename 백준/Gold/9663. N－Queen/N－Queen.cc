#include <iostream>
#include <cmath>
using namespace std;

int n;
int col[15]; // col[i]는 i번째 행의 퀸이 놓인 열 위치
int count = 0;

bool promising(int i) {
    for (int k = 1; k < i; k++) {
        if (col[i] == col[k] || abs(col[i] - col[k]) == i - k)
            return false;
    }
    
    return true;
}

void queens(int i) {
    if (promising(i)) {
        if (i == n) {
            count++;
        }
        else {
            for (int j = 1; j <= n; j++) {
                col[i + 1] = j;
                queens(i + 1);
            }
        }
    }
}

int main() {
    cin >> n;
    
    queens(0);
    
    cout << count;
    
    return 0;
}