#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    int B;
    cin >> N >> B;
    
    int result = 0;
    int power = 1;
    
    for (int i = N.size() - 1; i >= 0; i--) {
        char c = N[i];
        int digit = '0' <= c && c <= '9' ? c - '0' : c - 'A' + 10;
        
        result += digit * power;
        power *= B;
    }
    
    cout << result;
    
    return 0;
}