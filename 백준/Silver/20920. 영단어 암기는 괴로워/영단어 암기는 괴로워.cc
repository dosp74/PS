#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M; // N은 단어의 개수, M은 단어의 길이 기준
    cin >> N >> M;
    
    unordered_map<string, int> vocas;
    for (int i = 0; i < N; i++) {
        string voca;
        cin >> voca;
        
        if (voca.length() >= M) {
            vocas[voca]++;
        }
    }
    
    vector<pair<string, int>> v(vocas.begin(), vocas.end());
    
    sort(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b) {
        if (a.second == b.second) {
            if (a.first.length() == b.first.length()) {
                return a < b;
            }
            
            return a.first.length() > b.first.length();
        }
        
        return a.second > b.second;
    });
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << "\n";
    }
    
    return 0;
}