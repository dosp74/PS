#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> card(N);
    
    for (int i = 0; i < N; i++)
        cin >> card[i];
    
    int optimalSum = 0;
    
    for (int i = 0; i < card.size(); i++) {
        for (int j = i + 1; j < card.size(); j++) {
            for (int k = j + 1; k < card.size(); k++) {
                if (card[i] + card[j] + card[k] <= M && optimalSum <= card[i] + card[j] + card[k]) {
                    optimalSum = card[i] + card[j] + card[k];
                }
            }
        }
    }
    
    cout << optimalSum;
    
    return 0;
}