#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int current = 1;
    int second = 0;
    
    while (true) {
        if (N - current < 0) {
            current = 1;
            
            continue;
        }
        else {
            N -= current++;
            second++;
        }
        
        if (N == 0) {
            break;
        }
    }
    
    cout << second;
    
    return 0;
}