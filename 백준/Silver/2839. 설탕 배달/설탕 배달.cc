#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int count = 0;
    
    while (true) {
        if (N % 5 == 0) {
            count += N / 5;
            
            break;
        }
        
        N -= 3;
        count++;
        
        if (N < 0) {
            count = -1;
            
            break;
        }
    }
    
    cout << count;
    
    return 0;
}