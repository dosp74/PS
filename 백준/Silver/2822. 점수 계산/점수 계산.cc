#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<pair<int, int>> scores(8);
    for (int i = 0; i < 8; i++) {
        cin >> scores[i].first;
        scores[i].second = i + 1;
    }
    
    sort(scores.begin(), scores.end(), greater<>());
    
    int total_score = 0;
    vector<int> numbers;
    for (int i = 0; i < 5; i++) {
        total_score += scores[i].first;
        numbers.push_back(scores[i].second);
    }
    
    sort(numbers.begin(), numbers.end());
    
    cout << total_score << "\n";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    
    return 0;
}