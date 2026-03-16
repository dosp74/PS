#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string A, B;
    cin >> A >> B;
    
    int minValue, maxValue;
    string tempA = A, tempB = B;
    
    for (int i = 0; i < tempA.length(); i++) {
        if (tempA[i] == '6') {
            tempA[i] = '5';
        }
    }
    
    for (int i = 0; i < tempB.length(); i++) {
        if (tempB[i] == '6') {
            tempB[i] = '5';
        }
    }
    
    minValue = stoi(tempA) + stoi(tempB);
    
    tempA = A, tempB = B;
    
    for (int i = 0; i < tempA.length(); i++) {
        if (tempA[i] == '5') {
            tempA[i] = '6';
        }
    }
    
    for (int i = 0; i < tempB.length(); i++) {
        if (tempB[i] == '5') {
            tempB[i] = '6';
        }
    }
    
    maxValue = stoi(tempA) + stoi(tempB);
    
    cout << minValue << " " << maxValue;
    
    return 0;
}