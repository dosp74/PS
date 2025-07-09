#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    unordered_map<int, int> numberCard;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        numberCard[num]++;
    }
    
    int M;
    cin >> M;
    
    for (int i = 0; i < M; i++) {
        int input;
        cin >> input;
        
        if (numberCard.find(input) != numberCard.end()) {
            cout << numberCard[input] << " ";
        }
        else {
            cout << 0 << " ";
        }
    }
    
    return 0;
}