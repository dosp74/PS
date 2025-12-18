#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    int changyoung = 100, sangdeok = 100;
    
    while (n--) {
        int first, second;
        cin >> first >> second;
        
        if (first > second) {
            sangdeok -= first;
        }
        else if (first < second) {
            changyoung -= second;
        }
    }
    
    cout << changyoung << "\n" << sangdeok;
    
    return 0;
}