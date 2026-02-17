#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M, B;
    cin >> N >> M >> B;
    
    vector<vector<int>> land(N, vector<int>(M));
    int minHeight = 256;
    int maxHeight = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> land[i][j];
            minHeight = min(minHeight, land[i][j]);
            maxHeight = max(maxHeight, land[i][j]);
        }
    }
    
    int answerTime = 1e9;
    int answerHeight = 0;
    
    // 브루트포스
    for (int target = minHeight; target <= maxHeight; target++) {
        long long removeBlock = 0;
        long long addBlock = 0;
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (land[i][j] > target) {
                    removeBlock += (land[i][j] - target);
                }
                else if (land[i][j] < target) {
                    addBlock += (target - land[i][j]);
                }
            }
        }
        
        if (removeBlock + B < addBlock) {
            continue;
        }
        
        long long time = removeBlock * 2 + addBlock;
        
        if (time < answerTime) {
            answerTime = time;
            answerHeight = target;
        }
        else if (time == answerTime) {
            answerHeight = max(answerHeight, target);
        }
    }
    
    cout << answerTime << " " << answerHeight;
    
    return 0;
}