#include <iostream>
#include <iomanip>
using namespace std;

const double pi = 3.141592;

int main() {
    int d1, d2;
    cin >> d1 >> d2;
    
    cout << setprecision(8) << 2 * d1 + 2 * pi * d2;
    
    return 0;
}