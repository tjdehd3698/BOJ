#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int num, result=0;
	int DP[10004] = { 0, };
	int size[10004]{ 0, };
	cin >> num;

	for (int i = 3; i <num+3; i++) cin >> size[i];

	for (int i = 3; i < num+3; i++) {
		DP[i] = max(DP[i - 2] + size[i], size[i - 1] + DP[i - 3] + size[i]);
		DP[i] = max(DP[i], DP[i - 1]);
		result = max(result, DP[i]);
	}

	cout << result << endl;

	return 0;
}