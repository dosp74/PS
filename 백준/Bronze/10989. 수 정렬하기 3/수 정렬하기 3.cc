#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    const int MAX = 10001;
    int count[MAX] = {0};
    
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        count[x]++;
    }
    
    for (int i = 1; i < MAX; i++) {
        while (count[i]--)
            cout << i << "\n";
    }
    
    return 0;
}