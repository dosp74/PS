#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> X;
    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        
        X.push_back(input);
    }
    
    vector<int> copyX(X.begin(), X.end());
    
    sort(X.begin(), X.end());
    
    unordered_map<int, int> um;
    
    int current = 0;
    
    int X0 = X[0];
    um[X0] = 0;
    
    for (int i = 1; i < N; i++) {
        if (X[i - 1] < X[i]) {
            current++;
            int Xi = X[i];
            um[Xi] = current;
        }
    }
    
    for (int i = 0; i < N; i++) {
        int Xi = copyX[i];
        
        cout << um[Xi] << " ";
    }
    
    return 0;
}