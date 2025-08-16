#include <iostream>
using namespace std;

int main() {
    int in[10], out[10];
    
    for (int i = 0; i < 10; i++) {
        cin >> out[i] >> in[i];
    }
    
    int maxNumber = 0, current = 0;
    
    current -= out[0];
    current += in[0];
    
    maxNumber = current;
    
    for (int i = 1; i < 10; i++) {
        current -= out[i];
        current += in[i];
        
        if (maxNumber < current) {
            maxNumber = current;
        }
    }
    
    cout << maxNumber;
    
    return 0;
}