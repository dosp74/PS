#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    long long S;
    cin >> N >> S;
    
    vector<int> arr(N);
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int left = 0;
    int right = 0;
    long long sum = 0;
    
    int answer = INT_MAX;
    
    while (true) {
        if (sum >= S) {
            answer = min(answer, right - left);
            sum -= arr[left];
            left++;
        }
        else {
            if (right == N) {
                break;
            }
            
            sum += arr[right];
            right++;
        }
    }
    
    if (answer == INT_MAX) {
        cout << 0;
    }
    else {
        cout << answer;
    }
    
    return 0;
}