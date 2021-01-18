#include<iostream>
#include<cstring>
using namespace std;

int X[8] = { -1,-1,0,1,1,1,0,-1 };
int Y[8] = { 0,1,1,1,0,-1,-1,-1 };
bool arr[50][50] = { 0, };
bool visited[50][50] = { 0, };
int w, h, cnt;

void dfs(int x,int y) {
	visited[x][y] = true;

	for (int i = 0; i < 8; i++) {
		int newX = x + X[i];
		int newY = y + Y[i];
		if (0 <= newX && newX < h && 0 <= newY && newY < w) {
			if (arr[newX][newY]&&!visited[newX][newY]) {
				dfs(newX, newY);
			}
		}
	}
}

int main() {
	while (true) {
		cnt = 0;
		cin >> w >> h;
		if (w == 0 && h == 0)break;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++)
				cin >> arr[i][j];
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (!visited[i][j]&&arr[i][j]) {
					dfs(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << "\n";

		memset(visited, false, sizeof(visited));
		memset(arr, false, sizeof(arr));

	}

	return 0;
}