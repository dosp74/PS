#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    unordered_map<string, int> pokemonNumber;
    vector<string> pokemonName(N + 1);
    
    for (int i = 1; i <= N; i++) {
        string name;
        cin >> name;
        pokemonNumber[name] = i;
        pokemonName[i] = name;
    }
    
    for (int i = 0; i < M; i++) {
        string input;
        cin >> input;
        
        if (isdigit(input[0])) {
            int num = stoi(input);
            cout << pokemonName[num] << "\n";
        }
        else
            cout << pokemonNumber[input] << "\n";
    }
    
    return 0;
}