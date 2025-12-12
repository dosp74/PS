#include <bits/stdc++.h>
using namespace std;

vector<pair<char, char>> moves;

void hanoi(int n, char from, char to, char aux) {
    if (n == 0) {
        return;
    }
    
    hanoi(n - 1, from, aux, to);
    moves.push_back({from, to});
    hanoi(n - 1, aux, to, from);
}

void solve(int n, char src) {
    if (n == 0) {
        return;
    }
    
    if (n == 1) {
        moves.push_back({src, 'D'});
        
        return;
    }
    
    char other = (src == 'A') ? 'C' : 'A';
    
    hanoi(n - 2, src, other, 'B');
    
    moves.push_back({src, 'B'});
    moves.push_back({src, 'D'});
    moves.push_back({'B', 'D'});
    
    solve(n - 2, other);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    solve(N, 'A');
    
    cout << moves.size() << "\n";
    
    for (auto& m : moves) {
        cout << m.first << " " << m.second << "\n";
    }
    
    return 0;
}