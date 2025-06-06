#include <iostream>
using namespace std;

int main() {
    int burger[3];
    int beverage[2];
    
    cin >> burger[0] >> burger[1] >> burger[2] >> beverage[0] >> beverage[1];
    
    int min = burger[0] + beverage[0] - 50;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (burger[i] + beverage[j] - 50 < min)
                min = burger[i] + beverage[j] - 50;
        }
    }
    
    cout << min;
    
    return 0;
}