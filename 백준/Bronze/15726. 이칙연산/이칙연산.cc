#include <iostream>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    
    int result1 = (int)(A * B / C);
    int result2 = (int)(A / B * C);
    
    cout << max(result1, result2);
    
    return 0;
}