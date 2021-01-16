#include<iostream>
#include<string.h>
using namespace std;

bool arr[1001][1001] = { false, };
bool visited[1001] = { false, };
int Size;

void dfs(int s) {
	visited[s] = true;
	for (int i = 1; i <= Size; i++) {
		if (arr[s][i] && !visited[i]) {
			dfs(i);
		}
	}
}

int main() {
	int t,size;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> size;
		Size = size;

		for (int j = 1; j <= size; j++) {
			int b;
			cin >> b;
			arr[j][b] = true;
			arr[b][j] = true;
		}
		int cnt = 0;

		for (int i = 1; i <= Size; i++) {
			if (!visited[i]) {
				cnt++;
				dfs(i);
			}
		}

		cout << cnt << "\n";

		memset(arr, false, sizeof(arr));
		memset(visited, false, sizeof(visited));

	}

	return 0;
}