#include<iostream>
#include<cmath>
using namespace std;

int visited[300001] = { 0, };
int a, p;

void dfs(int s) {
	visited[s]++;

	if (visited[s] == 3)
		return;
	
	int sum = 0;
	while (s) {
		sum += (int)pow((s % 10), p);
		s /= 10;
	}
	dfs(sum);
}

int main() {
	int result=0;
	cin >> a >> p;

	dfs(a);
	for (int i = 1; i <= 300000; i++) {
		if (visited[i] == 1)result++;
	}
	
	cout << result << "\n";

	return 0;
}