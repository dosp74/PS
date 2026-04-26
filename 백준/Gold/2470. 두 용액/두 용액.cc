#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<long long> arr(N);
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    int left = 0;
    int right = N - 1;
    
    long long best = LLONG_MAX;
    long long answerA = arr[left];
    long long answerB = arr[right];
    
    while (left < right) {
        long long sum = arr[left] + arr[right];
        
        if (abs(sum) < best) {
            best = abs(sum);
            answerA = arr[left];
            answerB = arr[right];
        }
        
        if (sum < 0) {
            left++;
        }
        else if (sum > 0) {
            right--;
        }
        else {
            break;
        }
    }
    
    cout << answerA << " " << answerB;
    
    return 0;
}