#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    int H, W, N;
    
    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;
        
        int count = 1;
        
        while (N > H) {
            N -= H;
            count++;
        }
        
        if (count < 10)
            cout << N << 0 << count << "\n";
        else
            cout << N << count << "\n";
    }
    
    return 0;
}