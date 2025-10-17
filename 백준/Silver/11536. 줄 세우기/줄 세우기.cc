#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<string> names(N);
    for (int i = 0; i < N; i++) {
        cin >> names[i];
    }
    
    vector<string> sortedNames = names;
    
    sort(sortedNames.begin(), sortedNames.end());
    
    if (names == sortedNames) {
        cout << "INCREASING";
    }
    else {
        sort(sortedNames.rbegin(), sortedNames.rend()); // 내림차순 정렬
        
        if (names == sortedNames) {
            cout << "DECREASING";
        }
        else {
            cout << "NEITHER";
        }
    }
    
    return 0;
}