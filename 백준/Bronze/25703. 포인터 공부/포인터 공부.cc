#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    cout << "int a;\nint *ptr = &a;\n";
    
    for (int i = 2; i <= N; i++) {
        cout << "int ";
        
        int cnt = i;
        
        while (cnt--) {
            cout << "*";
        }
        
        if (i == 2) {
            cout << "ptr2" << " = &ptr;\n";
        }
        else {
            cout << "ptr" << i << " = &ptr" << i - 1 << ";\n";
        }
    }
    
    return 0;
}