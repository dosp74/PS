#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

int N, M, R, C, L;
vector<vector<int>> board;
int dx[4] = { -1, 1, 0, 0 }; // 상하좌우
int dy[4] = { 0, 0, -1, 1 };
vector<vector<int>> tunnel = {
	{}, // 0
	{0, 1, 2, 3}, // 1
	{0, 1}, // 2
	{2, 3}, // 3
	{0, 3}, // 4
	{1, 3}, // 5
	{1, 2}, // 6
	{0, 2} // 7
};
bool visited[50][50];
int opposite[4] = { 1, 0, 3, 2 }; // 하상우좌

struct QInfo {
	int x;
	int y;
	int time;
};

void bfs(int x, int y, int time) {
	queue<QInfo> q;
	visited[x][y] = true;
	q.push({x, y, time + 1});

	while (!q.empty()) {
		auto qInfo = q.front();
		q.pop();
		int cx = qInfo.x;
		int cy = qInfo.y;
		int ct = qInfo.time;

		if (ct == L) {
			return;
		}

		int type = board[cx][cy];

		// ex) {0, 1, 2, 3}
		for (int d : tunnel[type]) {
			int nx = cx + dx[d];
			int ny = cy + dy[d];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M || visited[nx][ny] || board[nx][ny] == 0) {
				continue;
			}

			int nType = board[nx][ny];
			bool isPossible = false;

			// ex) {0, 1}
			for (int nd : tunnel[nType]) {
				if (nd == opposite[d]) {
					isPossible = true;

					break;
				}
			}

			if (isPossible) {
				visited[nx][ny] = true;
				q.push({nx, ny, ct + 1});
			}
		}
	}
}

int main(int argc, char** argv) {
	int T;
	//freopen("input.txt", "r", stdin);
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		cin >> N >> M >> R >> C >> L;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				visited[i][j] = false;
			}
		}

		board.resize(N, vector<int>(M, 0));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> board[i][j];
			}
		}

		bfs(R, C, 0);

		int answer = 0;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (visited[i][j]) {
					answer++;
				}
			}
		}

		board.clear();

		cout << "#" << test_case << " " << answer << "\n";
	}

	return 0;
}