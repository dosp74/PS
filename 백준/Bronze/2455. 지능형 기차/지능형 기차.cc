#include <iostream>
using namespace std;

int main() {
    int in1, in2, in3, in4, out1, out2, out3, out4;
    cin >> out1 >> in1 >> out2 >> in2 >> out3 >> in3 >> out4 >> in4;
    
    int maxNumber = 0, current = 0;
    
    current -= out1;
    current += in1;
    
    maxNumber = current;
    
    current -= out2;
    current += in2;
    
    if (maxNumber < current) {
        maxNumber = current;
    }
    
    current -= out3;
    current += in3;
    
    if (maxNumber < current) {
        maxNumber = current;
    }
    
    current -= out4;
    current += in4;
    
    if (maxNumber < current) {
        maxNumber = current;
    }
    
    cout << maxNumber;
    
    return 0;
}