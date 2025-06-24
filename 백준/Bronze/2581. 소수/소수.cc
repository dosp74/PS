#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    
    int sum = 0;
    int minValue = 0;
    bool isPrime = true;
    
    for (int i = M; i <= N; i++) {
        isPrime = true;
        
        if (i == 1)
            continue;
        
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                
                break;
            }
        }
        
        if (isPrime) {
            sum += i;
            
            if (minValue == 0)
                minValue = i;
        }
    }
    
    if (sum == 0) {
        cout << -1;
        
        return 0;
    }
    
    cout << sum << "\n" << minValue;
    
    return 0;
}