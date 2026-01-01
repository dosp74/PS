#include <bits/stdc++.h>
using namespace std;

int M;
vector<vector<int>> cityInfo;
vector<pair<int, int>> house, chikenHouse;
int minValue = INT_MAX;

int calDistance(pair<int, int> A, pair<int, int> B) {
    int r1 = A.first; int r2 = B.first;
    int c1 = A.second; int c2 = B.second;
    
    return abs(r1 - r2) + abs(c1 - c2);
}

void solve(int i, int picked) {
    if (picked == M) {
        int currentValue = 0;
        int tempValue;
        
        for (int j = 0; j < house.size(); j++) {
            tempValue = INT_MAX;
            
            for (int k = 0; k < chikenHouse.size(); k++) {
                pair<int, int> A = house[j];
                pair<int, int> temp = chikenHouse[k];
                int r = temp.first;
                int c = temp.second;
                pair<int, int> B;
                
                if (cityInfo[r][c] == 2) {
                    B = temp;
                    tempValue = min(tempValue, calDistance(A, B));
                }
            }
            
            currentValue += tempValue;
        }
        
        minValue = min(minValue, currentValue);
        
        return;
    }
    else {
        for (int j = i; j < chikenHouse.size(); j++) {
            pair<int, int> c = chikenHouse[j];
            int cr = c.first;
            int cc = c.second;
            
            cityInfo[cr][cc] = 2;
            solve(j + 1, picked + 1);
            cityInfo[cr][cc] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N >> M;
    cityInfo.resize(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> cityInfo[i][j];
            
            if (cityInfo[i][j] == 1) {
                house.push_back({i, j});
            }
            
            if (cityInfo[i][j] == 2) {
                chikenHouse.push_back({i, j});
                cityInfo[i][j] = 0;
            }
        }
    }
    
    solve(0, 0);
    
    cout << minValue;
    
    return 0;
}