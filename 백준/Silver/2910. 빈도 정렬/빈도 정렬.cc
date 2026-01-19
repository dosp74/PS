#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, C;
    cin >> N >> C;
    
    unordered_map<int, int> freq;
    unordered_map<int, int> first_pos;
    vector<int> numbers;
    
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        
        if (freq[x] == 0) {
            first_pos[x] = i;
            numbers.push_back(x);
        }
        
        freq[x]++;
    }
    
    sort(numbers.begin(), numbers.end(), [&](int a, int b) {
        if (freq[a] != freq[b]) {
            return freq[a] > freq[b];
        }
        
        return first_pos[a] < first_pos[b];
    });
    
    for (int n : numbers) {
        for (int i = 0; i < freq[n]; i++) {
            cout << n << " ";
        }
    }
    
    return 0;
}