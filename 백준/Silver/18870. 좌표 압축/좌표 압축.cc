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
    X.erase(unique(X.begin(), X.end()), X.end());
    
    unordered_map<int, int> um;
    
    for (int i = 0; i < X.size(); i++) {
        um[X[i]] = i;
    }
    
    for (int i = 0; i < N; i++) {
        int Xi = copyX[i];
        
        cout << um[Xi] << " ";
    }
    
    return 0;
}