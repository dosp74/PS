#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, k;
    cin >> N >> k;
    
    vector<int> scores(N);
    for (int i = 0; i < N; i++)
        cin >> scores[i];
    
    sort(scores.begin(), scores.end());
    
    cout << scores[N - k];
    
    return 0;
}