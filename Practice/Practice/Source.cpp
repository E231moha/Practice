﻿#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

const int INF = 100000000;
const int MAX_N = 100;
const int MAX_M = 100;

typedef pair<int, int> P;

char maze[MAX_N][MAX_M + 1] = {
	"#S######.#",
	"......#..#",
	".#.##.##.#",
	".#........",
	"##.##.####",
	"....#....#",
	".#######.#",
	"....#.....",
	".####.###.",
	"....#...G#"
};

int N = 10, M = 10;
int sx = 0, sy = 1;
int gx = 9, gy = 8;

int d[MAX_N][MAX_M];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs() {
	queue<P> que;

	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++) d[i][j] = INF;
	que.push(P(sx, sy));
	d[sx][sy] = 0;

	while(que.size()) {
		P p = que.front(); que.pop();

		if(p.first == gx && p.second == gy) break;
		for(int i = 0; i < 4; i++) {
			int nx = p.first + dx[i], ny = p.second + dy[i];

			if(0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny] == INF) {
				que.push(P(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
	}
	return d[gx][gy];
}

int main(void) {
	//cout << maze[sx][sy] << endl;
	int res = bfs();
	cout << res << endl;
	return 0;
}