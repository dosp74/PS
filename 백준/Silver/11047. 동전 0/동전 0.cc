#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> worth;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        worth.push_back(temp);
    }
    
    sort(worth.begin(), worth.end(), greater<int>());
    
    int count = 0;
    
    for (int i = 0; i < N; i++) {
        if (K >= worth[i])
            count += K / worth[i];
        
        K %= worth[i];
    }
    
    cout << count;
    
    return 0;
}