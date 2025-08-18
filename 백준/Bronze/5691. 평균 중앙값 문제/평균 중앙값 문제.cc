#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    while (!(A == 0 && B == 0)) {
        cout << 2 * A - B << "\n";
        
        cin >> A >> B;
    }
    
    return 0;
}