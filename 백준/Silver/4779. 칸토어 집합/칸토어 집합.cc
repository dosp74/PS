#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void cantor(int start, int len, string& line) {
    if (len == 1) {
        return;
    }
    
    int third = len / 3;
    
    for (int i = start + third; i < start + 2 * third; i++) {
        line[i] = ' ';
    }
    
    cantor(start, third, line);
    cantor(start + 2 * third, third, line);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    while (cin >> N) {
        int length = pow(3, N);
        string line(length, '-');
        
        cantor(0, length, line);
        
        cout << line << "\n";
    }
    
    return 0;
}