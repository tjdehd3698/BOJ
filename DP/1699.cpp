//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//
//	int DP[100001] = { 0, };
//
//	for (int i = 1; i <= n; i++) {
//		DP[i] = i;
//		for (int j = 1; j * j <= i; j++) {
//			DP[i] = min(DP[i], DP[i - j * j] + 1);
//		}
//	}
//
//	cout << DP[n] << endl;
//
//	return 0;
//}