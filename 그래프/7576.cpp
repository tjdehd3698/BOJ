#include<iostream>
#include<queue>
using namespace std;

struct tomato {
	int x, y;
};

int m, n;
queue<tomato> q;
int X[4] = { -1,0,1,0 };
int Y[4] = { 0,1,0,-1 };
int arr[1000][1000];

void dfs() {
	while (!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nX = x + X[i];
			int nY = y + Y[i];

			if (0 <= nX && nX < n && 0 <= nY && nY < m && arr[nX][nY] == 0) {
				arr[nX][nY] = arr[x][y] + 1;
				q.push({ nX,nY });
			}
		}
	}

}

int main() {
	cin >> m >> n;
	int result = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1)
				q.push({ i, j });
		}
	}

	dfs();
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				cout << -1 << "\n";
				return 0;
			}
			if (result < arr[i][j]) {
				result = arr[i][j];
			}
		}
	}

	cout << result - 1 << "\n";

	return 0;
}