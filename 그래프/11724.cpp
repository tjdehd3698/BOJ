#include<iostream>
using namespace std;

const int MAX = 1001;
bool visited[MAX] = { false, };
bool map[MAX][MAX] = { false, };
int n,m;

void dfs(int v) {
	visited[v] = 1;
	for (int i = 1; i <= n; i++) {
		if (map[v][i] && !visited[i]) {
			dfs(i);
		}
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = true;
		map[b][a] = true;
	}

	int cnt = 0;

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			cnt++;
			dfs(i);
		}
	}

	cout << cnt << "\n";

	return 0;
}