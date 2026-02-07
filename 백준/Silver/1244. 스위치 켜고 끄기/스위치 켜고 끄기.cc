#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    int M;
    cin >> M;
    
    for (int i = 0; i < M; i++) {
        int gender, k;
        cin >> gender >> k;
        
        if (gender == 1) { // 남학생
            for (int idx = k - 1; idx < N; idx += k) {
                v[idx] ^= 1;
            }
        }
        else { // 여학생
            int left = k - 1;
            int right = k - 1;
            
            while (left - 1 >= 0 && right + 1 < N && v[left - 1] == v[right + 1]) {
                left--;
                right++;
            }
            
            for (int idx = left; idx <= right; idx++) {
                v[idx] ^= 1;
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << v[i] << " ";
        
        if ((i + 1) % 20 == 0) {
            cout << "\n";
        }
    }
    
    return 0;
}