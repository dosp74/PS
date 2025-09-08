#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N;
const int MAX = 25;
int graph[MAX][MAX];
bool visited[MAX][MAX];
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};

int dfs(int x, int y) {
    visited[x][y] = true;
    int cnt = 1;
    
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
            if (graph[nx][ny] == 1 && !visited[nx][ny]) {
                cnt += dfs(nx, ny);
            }
        }
    }
    
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string row;
        cin >> row;
        
        for (int j = 0; j < N; j++) {
            graph[i][j] = row[j] - '0';
        }
    }
    
    vector<int> village;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (graph[i][j] == 1 && !visited[i][j]) {
                int size = dfs(i, j);
                village.push_back(size);
            }
        }
    }
    
    sort(village.begin(), village.end());
    
    cout << village.size() << "\n";
    
    for (int v : village) {
        cout << v << "\n";
    }
    
    return 0;
}