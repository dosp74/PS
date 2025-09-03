#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<pair<int, int>> meeting(N);
    for (int i = 0; i < N; i++) {
        int startTime, endTime;
        cin >> startTime >> endTime;
        meeting[i] = {startTime, endTime};
    }
    
    // 빨리 끝나는 회의를 최대한 많이 포함시켜야 한다.
    sort(meeting.begin(), meeting.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        
        return a.second < b.second;
    });
    
    int currentEndTime = meeting[0].second;
    int count = 1;
    
    for (int i = 1; i < N; i++) {
        if (meeting[i].first >= currentEndTime) {
            currentEndTime = meeting[i].second;
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}