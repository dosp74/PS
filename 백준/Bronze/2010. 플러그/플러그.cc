#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int result = 0;
    
    for (int i = 0; i < N - 1; i++) {
        int num;
        cin >> num;
        result += --num;
    }
    
    int num;
    cin >> num;
    result += num;
    
    cout << result;
    
    return 0;
}