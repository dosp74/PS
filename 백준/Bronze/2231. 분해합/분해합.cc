#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int result = 0;
    
    for (int i = 1; i <= N; i++) {
        int num = 0;
        int temp = i;
        
        while (true) {
            if (temp > 9) {
                num += temp % 10;
                temp /= 10;
            }
            else {
                num += temp;
                break;
            }
        }
            
        if (i + num == N) {
            result = i;
            break;
        }
    }
    
    cout << result;
    
    return 0;
}