#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (max(a, max(b, c)) >= (a + b + c - (max(a, max(b, c)))))
        cout << 2 * (a + b + c - (max(a, max(b, c)))) - 1;
    else
        cout << a + b + c;
    
    return 0;
}