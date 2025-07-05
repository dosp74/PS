#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;
    
    int result = 0;
    
    while (money != -1) {
        result += money;
        cin >> money;
    }
    
    cout << result;
    
    return 0;
}