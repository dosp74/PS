#include <iostream>
#include <string>
using namespace std;

const int M = 1234567891;
const int R = 31;

int main() {
    int L;
    string str;
    cin >> L >> str;
    
    long long result = 0;
    long long pow_r = 1;
    
    for (int i = 0; i < L; i++) {
        int temp = str[i] - 'a' + 1;
        result = (result + temp * pow_r % M) % M;
        pow_r = (pow_r * R) % M;
    }
    
    cout << result;
    
    return 0;
}