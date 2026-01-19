#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K;
    cin >> K;
    
    vector<int> p1(K), p2;
    for (int i = 0; i < K; i++) {
        cin >> p1[i];
    }
    
    vector<pair<int, int>> answer;
    for (int i = 0; i < K; i++) {
        int target = K - i;
        
        if (find(p1.begin(), p1.end(), target) != p1.end()) {
            while (true) {
                int disk = p1.back();
                p1.pop_back();
                
                if (disk == target) {
                    answer.push_back({1, 3});
                    
                    break;
                }
                else {
                    answer.push_back({1, 2});
                    p2.push_back(disk);
                }
            }
        }
        else {
            while (true) {
                int disk = p2.back();
                p2.pop_back();
                
                if (disk == target) {
                    answer.push_back({2, 3});
                    
                    break;
                }
                else {
                    answer.push_back({2, 1});
                    p1.push_back(disk);
                }
            }
        }
    }
    
    cout << answer.size() << "\n";
    
    for (const auto& move : answer) {
        cout << move.first << " " << move.second << "\n";
    }
    
    return 0;
}