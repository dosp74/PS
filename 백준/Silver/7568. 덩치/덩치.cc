#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<pair<int, int>> v;
    
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    
    for (int i = 0; i < N; i++) {
        int count = 1;
        
        for (int j = 0; j < N; j++) {
            if (v[i].first < v[j].first && v[i].second < v[j].second) {
                count++;
            }
        }
        
        cout << count << " ";
    }
    
    return 0;
}