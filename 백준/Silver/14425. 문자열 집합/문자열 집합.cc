#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    unordered_set<string> S;
    for (int i = 0; i < N; i++) {
        string temp;
        cin >> temp;
        S.insert(temp);
    }
    
    int count = 0;
    for (int i = 0; i < M; i++) {
        string temp;
        cin >> temp;
        
        if (S.find(temp) != S.end())
            count++;
    }
    
    cout << count;
    
    return 0;
}