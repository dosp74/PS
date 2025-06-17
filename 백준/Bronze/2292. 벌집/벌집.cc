#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    if (N == 1) {
        cout << 1;
        
        return 0;
    }
    
    int currentLast = 1;
    int layer = 1;
    
    while (currentLast < N) {
        currentLast += 6 * layer;
        layer++;
    }
    
    cout << layer;
    
    return 0;
}