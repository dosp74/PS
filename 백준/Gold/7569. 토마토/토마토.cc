#include <bits/stdc++.h>
using namespace std;

const int MAX = 101;
int M, N, H; // M은 상자의 가로 칸의 수, N은 상자의 세로 칸의 수, H는 쌓아올려지는 상자의 수
int tomato[MAX][MAX][MAX];
int dx[6] = {-1, 1, 0, 0, 0, 0};
int dy[6] = {0, 0, -1, 1, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};

struct Node {
    int x, y, z, day;
};

int bfs() {
    queue<Node> q;
    int days = 0;
    
    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                if (tomato[x][y][z] == 1) {
                    q.push({x, y, z, 0});
                }
            }
        }
    }
    
    while (!q.empty()) {
        auto current = q.front();
        q.pop();
        days = max(days, current.day);
        
        for (int i = 0; i < 6; i++) {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];
            int nz = current.z + dz[i];
            
            if (nx >= 0 && nx < M && ny >= 0 && ny < N && nz >= 0 && nz < H) {
                if (tomato[nx][ny][nz] == 0) {
                    tomato[nx][ny][nz] = 1;
                    q.push({nx, ny, nz, current.day + 1});
                }
            }
        }
    }
    
    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                if (tomato[x][y][z] == 0) {
                    return -1;
                }
            }
        }
    }
    
    return days;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> M >> N >> H;
    
    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                cin >> tomato[x][y][z];
            }
        }
    }
    
    cout << bfs();
    
    return 0;
}