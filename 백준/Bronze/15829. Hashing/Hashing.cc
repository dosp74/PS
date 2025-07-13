#include <iostream>
#include <string>
using namespace std;

int main() {
    int L;
    string str;
    cin >> L >> str;
    
    long long result = 0;
    
    for (int i = 0; i < L; i++) {
        char temp = str[i];
        temp = temp - 'a' + 1;
        
        int r = 1;
        int exp = i == 0 ? 1 : i;
        
        for (int j = 0; j < i; j++) {
            r *= 31;
        }
        
        result += (int)temp * r;
    }
    
    cout << result;
    
    return 0;
}