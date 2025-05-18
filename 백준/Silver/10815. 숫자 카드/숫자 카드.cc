#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N;
    
    vector<int> card(N);
    for (int i = 0; i < N; i++)
        cin >> card[i];
    
    sort(card.begin(), card.end());
    
    cin >> M;
    
    vector<int> inputCard(M);
    for (int i = 0; i < M; i++)
        cin >> inputCard[i];
    
    for (int i = 0; i < M; i++) {
        if (binary_search(card.begin(), card.end(), inputCard[i]))
            cout << "1 ";
        else
            cout << "0 ";
    }
    
    return 0;
}