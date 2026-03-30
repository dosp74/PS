#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    map<string, string> info;
    info["Algorithm"] = "204";
    info["DataAnalysis"] = "207";
    info["ArtificialIntelligence"] = "302";
    info["CyberSecurity"] = "B101";
    info["Network"] = "303";
    info["Startup"] = "501";
    info["TestStrategy"] = "105";
    
    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
        cout << info[input] << "\n";
    }
    
    return 0;
}