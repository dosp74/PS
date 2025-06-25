#include <iostream>
#include <string>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    
    string SX, SY;
    SX.append(X, '1');
    SY.append(Y, '1');
    
    long long result = stoll(SX) + stoll(SY);
    
    cout << result;
    
    return 0;
}