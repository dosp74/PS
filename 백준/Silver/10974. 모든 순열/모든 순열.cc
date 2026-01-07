#include <bits/stdc++.h>
using namespace std;

int N;
int col[8];
bool picked[8];

void print(int i) {
    if (i == N) {
        for (int j = 0; j < N; j++) {
            cout << col[j] << " ";
        }
        
        cout << "\n";
        
        return;
    }
    else {
        for (int j = 0; j < N; j++) {
            if (picked[j]) {
                continue;
            }
            
            picked[j] = true;
            col[i] = j + 1;
            print(i + 1);
            picked[j] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    
    print(0);
    
    return 0;
}