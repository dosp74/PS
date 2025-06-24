#include <iostream>
using namespace std;

int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    
    int minLength;
    
    minLength = min(min(x, w - x), min(y, h - y));
    
    cout << minLength;
    
    return 0;
}