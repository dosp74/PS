#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, V;
    cin >> A >> B >> V;
    
    int days = ceil((double)(V - A) / (A - B)) + 1;
    
    cout << days;
    
    return 0;
}