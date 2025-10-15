#include <bits/stdc++.h>
using namespace std;

char graph[100][100];
bool visited[100][100];
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
        
        for (int j = 0; j < N; j++) {
            graph[i][j] = input[j];
            visited[i][j] = false;
        }
    }
    
    // 적록색약이 아닌 사람이 보는 경우
    int count1 = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j]) {
                count1++;
                char color = graph[i][j];
                visited[i][j] = true;
                queue<pair<int, int>> q;
                q.push({i, j});
                
                while(!q.empty()) {
                    auto [x, y] = q.front();
                    q.pop();
                    
                    for (int i = 0; i < 4; i++) {
                        int nx = x + dx[i];
                        int ny = y + dy[i];
                        
                        if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny]) {
                            if (graph[nx][ny] == color) {
                                visited[nx][ny] = true;
                                q.push({nx, ny});
                            }
                        }
                    }
                }
            }
        }
    }
    
    // 적록색약인 사람이 보는 경우
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (graph[i][j] == 'G') {
                graph[i][j] = 'R';
            }
            
            visited[i][j] = false;
        }
    }
    
    int count2 = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j]) {
                count2++;
                char color = graph[i][j];
                visited[i][j] = true;
                queue<pair<int, int>> q;
                q.push({i, j});
                
                while(!q.empty()) {
                    auto [x, y] = q.front();
                    q.pop();
                    
                    for (int i = 0; i < 4; i++) {
                        int nx = x + dx[i];
                        int ny = y + dy[i];
                        
                        if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny]) {
                            if (graph[nx][ny] == color) {
                                visited[nx][ny] = true;
                                q.push({nx, ny});
                            }
                        }
                    }
                }
            }
        }
    }
    
    cout << count1 << " " << count2;
    
    return 0;
}