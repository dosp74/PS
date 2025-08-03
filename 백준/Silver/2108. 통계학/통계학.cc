#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> v(N);
    long long sum = 0;
    
    for (int i = 0; i < N; i++) {
        cin >> v[i];
        sum += v[i];
    }
    
    sort(v.begin(), v.end());
    
    // 1. 산술평균
    int average = round((double)sum / N);
    cout << average << "\n";
    
    // 2. 중앙값
    cout << v[N / 2] << "\n";
    
    // 3. 최빈값
    map<int, int> m;
    for (int number : v) {
        m[number]++;
    }
    
    vector<pair<int, int>> freq(m.begin(), m.end());
    
    sort(freq.begin(), freq.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        
        return a.second > b.second;
    });
    
    int mode = freq[0].first;
    
    if (freq.size() > 1 && freq[0].second == freq[1].second) {
        mode = freq[1].first;
    }
    
    cout << mode << "\n";
    
    // 4. 범위
    cout << *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
    
    return 0;
}