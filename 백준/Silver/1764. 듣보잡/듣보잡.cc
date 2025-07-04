#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    unordered_set<string> S;
    for (int i = 0; i < N; i++) {
        string temp;
        cin >> temp;
        S.insert(temp);
    }
    
    int count = 0;
    vector<string> v;
    
    for (int i = 0; i < M; i++) {
        string temp;
        cin >> temp;
        
        if (S.find(temp) != S.end()) {
            count++;
            v.push_back(temp);
        }
    }
    
    cout << count << "\n";
    
    sort(v.begin(), v.end());
    
    for (const auto& s : v)
        cout << s << "\n";
    
    return 0;
}