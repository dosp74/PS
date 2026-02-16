#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    while (N--) {
        long long X;
        cin >> X;
        
        long long root = sqrt(X);
        
        if (root * root == X) { // 약수 개수가 홀수 <-> 완전제곱수
            cout << "1 ";
        }
        else {
            cout << "0 ";
        }
    }
    
    return 0;
}