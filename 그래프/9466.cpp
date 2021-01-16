#include<iostream>
#include<cstring>
using namespace std;

bool visited[100001];
int arr[100001];
bool done[100001];

int s,cnt=0;

void dfs(int s) {
	visited[s] = 1;
	int next = arr[s];
	if (!visited[next])
		dfs(next);
	else if (!done[next]) {
		for (int i = next; i != s; i = arr[i])
			cnt++;
		cnt++;
	}
	done[s] = true;

}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> s;
		for (int j = 1; j <= s; j++) {
			cin >> arr[j];
		}

		for (int j = 1; j <= s; j++) {
			if (!visited[j])
				dfs(j);
		}

		cout << s - cnt << "\n";

		cnt = 0;
		memset(visited, false, sizeof(visited));
		memset(done, false, sizeof(done));
	}
	return 0;
}