#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int current = 2;
    int result = 2;
    
    for (int i = 0; i < N; i++) {
        int mul = 1;
        for (int j = 0; j < i; j++)
            mul *= 2;
        
        current += mul;
        result = current * current;
    }
    
    cout << result;
    
    return 0;
}