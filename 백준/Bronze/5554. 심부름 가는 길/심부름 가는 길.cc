#include <iostream>
using namespace std;

int main() {
    int one, two, three, four;
    cin >> one >> two >> three >> four;
    
    int sum = one + two + three + four;
    
    cout << sum / 60 << "\n" << sum % 60;
    
    return 0;
}