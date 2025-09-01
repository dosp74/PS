#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int N, int from, int to, int via) {
    if (N == 1) {
        cout << from << " " << to << "\n";
        
        return;
    }
    
    hanoi(N - 1, from, via, to);
    cout << from << " " << to << "\n";
    hanoi(N - 1, via, to, from);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    cout << (long long)pow(2, N) - 1 << "\n";
    
    hanoi(N, 1, 3, 2);
    
    return 0;
}