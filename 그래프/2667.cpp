#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int X[4] = { -1,0,1,0 };
int Y[4] = { 0,1,0,-1 };
bool visited[25][25];
string arr[25];
int n, cnt;

void dfs(int a,int b) {
	visited[a][b] = true;
	cnt++;
	
	for (int i = 0; i < 4; i++) {
		int A = a + X[i];
		int B = b + Y[i];
		if (0 <= A && A < n && 0 <= B && B < n) {
			if (arr[A][B] == '1' && !visited[A][B]) {
				dfs(A, B);
			}
		}

	}

}

int main(){
	cin >> n;
	vector<int> v;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j] && arr[i][j] == '1') {
				cnt = 0;
				dfs(i, j);
				v.push_back(cnt);
			}
		}
	}

	sort(v.begin(), v.end());
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) cout << v[i] << "\n";

	return 0;
}
