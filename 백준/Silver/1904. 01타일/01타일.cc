#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> dp(N + 2, 0);
    
    dp[1] = 1;
    dp[2] = 2;
    
    /*
    길이 N에 대한 모든 가짓수를 dp[n]이라고 하면,
    마지막에 놓는 타일이 무엇인지에 따라 두 가지로 나눌 수 있다.
    
    1. 마지막이 1 -> 나머지는 길이 n - 1에 대한 가짓수: dp[n - 1]
    2. 마지막이 00 -> 나머지는 길이 n - 2에 대한 가짓수: dp[n - 2]
    */
    
    for (int i = 3; i <= N; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }
    
    cout << dp[N];
    
    return 0;
}