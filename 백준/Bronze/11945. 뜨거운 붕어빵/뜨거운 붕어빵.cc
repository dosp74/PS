#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    string line;
    for (int i = 0; i < N; i++) {
        cin >> line;
        
        reverse(line.begin(), line.end());
        
        cout << line << "\n";
    }
    
    return 0;
}