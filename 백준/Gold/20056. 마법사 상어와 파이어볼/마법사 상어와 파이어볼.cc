#include <bits/stdc++.h>
using namespace std;

int N, M;
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1}; // 파이어볼의 방향
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

struct FireBall {
    int r; // 행
    int c; // 열
    int m; // 질량
    int s; // 속력
    int d; // 방향
};

vector<FireBall> board[50][50];
vector<FireBall> fireBalls;
vector<FireBall> newFireBalls;

// 파이어볼 이동
void move(FireBall& fireBall) {
    int moveDist = fireBall.s % N;
    int nr = (fireBall.r + dx[fireBall.d] * moveDist + N) % N;
    int nc = (fireBall.c + dy[fireBall.d] * moveDist + N) % N;
    
    fireBall.r = nr; fireBall.c = nc;
    board[nr][nc].push_back(fireBall);
}

void merge(int x, int y) {
    int sumM = 0; // 합쳐진 파이어볼 질량의 합
    int sumS = 0; // 합쳐진 파이어볼 속력의 합
    int cnt = board[x][y].size(); // 합쳐진 파이어볼의 개수
    
    // 1. 같은 칸에 있는 파이어볼 하나로 합치기
    for (auto& f : board[x][y]) {
        sumM += f.m;
        sumS += f.s;
    }
    
    // 4. 소멸될 파이어볼 소멸시키기
    if (sumM / 5 == 0) {
        return;
    }
    
    // 2. 파이어볼 4개로 나누기
    int newD1[4] = {0, 2, 4, 6};
    int newD2[4] = {1, 3, 5, 7};
    
    // 모두 홀수인지 체크
    bool isOdd = true;
    
    for (auto& f : board[x][y]) {
        if (f.d % 2 == 0) {
            isOdd = false;
        }
    }
    
    // 모두 짝수인지 체크
    bool isEven = true;
    
    for (auto& f : board[x][y]) {
        if (f.d % 2 != 0) {
            isEven = false;
        }
    }
    
    // 3. 나누어진 파이어볼의 질량, 속력, 방향 계산 및 적용
    if (isOdd || isEven) { // 파이어볼의 방향이 모두 홀수이거나 모두 짝수인 경우
        for (int i = 0; i < 4; i++) {
            newFireBalls.push_back({x, y, sumM / 5, sumS / cnt, newD1[i]});
        }
    }
    else {
        for (int i = 0; i < 4; i++) {
            newFireBalls.push_back({x, y, sumM / 5, sumS / cnt, newD2[i]});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K;
    cin >> N >> M >> K;
    
    // 입력
    for (int i = 0; i < M; i++) {
        int r; int c; int m; int s; int d;
        cin >> r >> c >> m >> s >> d;
        fireBalls.push_back({--r, --c, m, s, d});
    }
    
    while (K--) {
        // 마법사 상어의 파이어볼 이동 명령 시(fireBalls -> board 반영)
        for (auto& f : fireBalls) {
            move(f);
        }
        
        // 파이어볼 이동이 끝난 뒤 2개 이상의 파이어볼이 있는 칸에서
        // (fireBalls, board -> newFireBalls 반영)
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (board[i][j].size() >= 2) {
                    merge(i, j);
                }
                else if (board[i][j].size() == 1) {
                    newFireBalls.push_back(board[i][j].front());
                }
            }
        }
        
        // board 갱신
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                board[i][j].clear();
            }
        }
        
        // fireBalls 갱신
        fireBalls = newFireBalls;
        newFireBalls.clear();
    }
    
    // 남아있는 파이어볼 질량의 합 계산 및 출력
    int answer = 0;
    
    for (int i = 0; i < fireBalls.size(); i++) {
        answer += fireBalls[i].m;
    }
    
    cout << answer;
    
    return 0;
}