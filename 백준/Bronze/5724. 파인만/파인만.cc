#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    while (N != 0) {
        int result = 0;
        
        for (int i = 1; i <= N; i++) {
            result += i * i;
        }
        
        cout << result << "\n";
        
        cin >> N;
    }
    
    return 0;
}