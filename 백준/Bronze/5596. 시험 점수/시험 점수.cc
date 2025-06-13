#include <iostream>
using namespace std;

int main() {
    int one[4];
    cin >> one[0] >> one[1] >> one[2] >> one[3];
    
    int two[4];
    cin >> two[0] >> two[1] >> two[2] >> two[3];
    
    int S = one[0] + one[1] + one[2] + one[3];
    int T = two[0] + two[1] + two[2] + two[3];
    
    if (S >= T)
        cout << S;
    else
        cout << T;
    
    return 0;
}