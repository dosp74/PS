#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> score(N);
    
    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }
    
    int plusScore = 1;
    int answer = 0;
    
    for (int i = 0; i < N; i++) {
        if (score[i] == 1) {
            answer += plusScore++;
        }
        else {
            plusScore = 1;
        }
    }
    
    cout << answer;
    
    return 0;
}