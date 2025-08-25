#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int S, T, D;
    cin >> S >> T >> D;
    
    long long time = D / (2 * S);
    long long F = (long long)T * time;
    
    cout << F;
    
    return 0;
}