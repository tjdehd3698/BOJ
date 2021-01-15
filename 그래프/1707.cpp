#include<iostream>
#include<vector>
#include<string>
#include<string.h>
using namespace std;

vector<int> graph[20001];
int color[20001];
int v, e;

void dfs(int s,int c) {
	color[s] = c;

	for (int i = 0; i < graph[s].size(); i++) {
		int next = graph[s][i];
		if (!color[next]) {
			dfs(next,3-c);
		}
	}
}
string check() {
	for (int i = 1; i <= v; i++) {
		for (int j = 0; j < graph[i].size(); j++) {
			int next = graph[i][j];
			if (color[i] == color[next]) {
				return "NO";
			}
		}
	}
	return "YES";
}

int main() {
	int k;
	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> v >> e;

		for (int j = 0; j < e; j++) {
			int a, b;
			cin >> a >> b;
			graph[a].push_back(b);
			graph[b].push_back(a);
		}

		for (int i = 1; i <= v; i++) {
			if (!color[i]) {
				dfs(i,1);
			}
		}
		cout << check() << "\n";

		for (int i = 0; i <= v; i++) {
			graph[i].clear();
		}
		memset(color, false, sizeof(color));
	}

	return 0;
}