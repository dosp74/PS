#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    int hamburger = 0;
    
    while (A >= 2 && B >= 1) {
        A--;
        B--;
        A--;
        hamburger++;
    }
    
    cout << hamburger;
    
    return 0;
}