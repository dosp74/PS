#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    // 진짜 약수 중 최솟값 x 최댓값 = N
    int minValue = *min_element(v.begin(), v.end());
    int maxValue = *max_element(v.begin(), v.end());
    
    cout << minValue * maxValue;
    
    return 0;
}