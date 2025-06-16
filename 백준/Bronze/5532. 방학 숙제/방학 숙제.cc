#include <iostream>
using namespace std;

int main() {
    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    
    while (A > 0 || B > 0) {
        A -= C;
        B -= D;
        L--;
    }
    
    cout << L;
    
    return 0;
}