#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    if (n == 0) {
        cout << 0;
        
        return 0;
    }
    
    vector<int> ranks;
    
    for (int i = 0; i < n; i++) {
        int rank;
        cin >> rank;
        ranks.push_back(rank);
    }
    
    sort(ranks.begin(), ranks.end());
    
    int trimmedValue = round(n * 0.15);
    int levelSum = 0;
    
    for (int i = trimmedValue; i < n - trimmedValue; i++) {
        levelSum += ranks[i];
    }
    
    int result = round((double)levelSum / (n - 2 * trimmedValue));
    cout << result;
    
    return 0;
}