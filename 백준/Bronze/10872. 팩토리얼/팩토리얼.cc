#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    if (N == 0) {
        cout << 1;
        return 0;
    }
    
    int result = 1;
    
    for (int i = 1; i <= N; i++)
        result *= i;
    
    cout << result;
    
    return 0;
}