#include <iostream>
using namespace std;

int main() {
    int price;
    cin >> price;
    
    int temp;
    for (int i = 0; i < 9; i++) {
        cin >> temp;
        price -= temp;
    }
    
    cout << price;
    
    return 0;
}