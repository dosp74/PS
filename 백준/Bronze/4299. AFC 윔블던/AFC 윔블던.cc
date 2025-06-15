#include <iostream>
using namespace std;

int main() {
    int sum, minus;
    cin >> sum >> minus;
    
    if ((sum + minus) % 2 != 0 || (sum - minus) % 2 != 0 || sum < minus) {
        cout << -1;
        
        return 0;
    }
    
    int A = (sum + minus) / 2;
    int B = (sum - minus) / 2;
    
    if (A < 0 || B < 0) {
        cout << -1;
        
        return 0;
    }
    
    cout << A << " " << B;
    
    return 0;
}