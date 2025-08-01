#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X; // 0 < X <= 64
    
    int count = 0;
    
    while (X > 0) {
        if (X & 1) { // 마지막 비트 확인
            count++;
        }
        
        X >>= 1; // 다음 비트 확인
    }
    
    cout << count;
    
    return 0;
}