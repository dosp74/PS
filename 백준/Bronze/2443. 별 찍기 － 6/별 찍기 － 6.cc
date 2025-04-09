#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = i; j > 0; j--)
            cout << " ";
        
        for (int k = 2 * (N - i) - 1; k > 0; k--)
            cout << "*";
        
        cout << "\n";
    }
    
    return 0;
}