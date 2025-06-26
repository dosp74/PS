#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int k;
    
    for (int i = 0; i < n; i++) {
        cin >> k;
        
        for (int j = 0; j < k; j++)
            cout << "=";
        
        cout << "\n";
    }
    
    return 0;
}