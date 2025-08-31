#include <iostream>
#include <vector>
#include <stack>
#include <utility>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    // 탑의 높이와 탑의 인덱스를 같이 저장
    vector<pair<int, int>> topsHeights;
    for (int i = 0; i < N; i++) {
        int height;
        cin >> height;
        topsHeights.push_back({height, i + 1});
    }
    
    stack<pair<int, int>> currentMaxHeight;
    currentMaxHeight.push(topsHeights[0]);
    
    cout << 0 << " ";
    
    for (int i = 1; i < N; i++) {
        // 왼쪽 탑의 높이가 오른쪽 탑의 높이보다 높으면
        if (topsHeights[i].first < topsHeights[i - 1].first) {
            if (!currentMaxHeight.empty()) {
                cout << currentMaxHeight.top().second << " ";
                currentMaxHeight.push(topsHeights[i]);
            }
            else {
                cout << 0 << " ";
            }
        }
        // 오른쪽 탑의 높이가 왼쪽 탑의 높이보다 높으면
        else {
            while (!currentMaxHeight.empty() &&
                   topsHeights[i].first > currentMaxHeight.top().first) {
                currentMaxHeight.pop();
            }
            
            if (currentMaxHeight.empty()) {
                cout << 0 << " ";
                currentMaxHeight.push(topsHeights[i]);
                
                continue;
            }
            
            cout << currentMaxHeight.top().second << " ";
            currentMaxHeight.push(topsHeights[i]);
        }
    }
    
    return 0;
}