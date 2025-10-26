#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A[10], B[10];
    
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }
    
    for (int i = 0; i < 10; i++) {
        cin >> B[i];
    }
    
    int countA = 0, countB = 0;
    
    for (int i = 0; i < 10; i++) {
        if (A[i] > B[i]) {
            countA++;
        }
        else if (A[i] < B[i]) {
            countB++;
        }
    }
    
    if (countA > countB) {
        cout << "A";
    }
    else if (countA < countB) {
        cout << "B";
    }
    else {
        cout << "D";
    }
    
    return 0;
}