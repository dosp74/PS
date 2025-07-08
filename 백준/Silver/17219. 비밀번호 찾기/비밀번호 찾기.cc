#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    unordered_map<string, string> sitePassword(N);
    for (int i = 0; i < N; i++) {
        string site, password;
        cin >> site >> password;
        sitePassword[site] = password;
    }
    
    for (int i = 0; i < M; i++) {
        string input;
        cin >> input;
        cout << sitePassword[input] << "\n";
    }
    
    return 0;
}