//#include<iostream>
//using namespace std;
//
//int main() {
//	int test;
//	cin >> test;
//
//	long long DP[101];
//	DP[1] = 1;
//	DP[2] = 1;
//	DP[3] = 1;
//
//	for (int i = 0; i < test; i++) {
//		int n;
//		cin >> n;
//
//		for (int j = 4; j <= n; j++) {
//			DP[j] = DP[j - 3] + DP[j - 2];
//		}
//
//		cout << DP[n] << endl;
//	}
//
//	return 0;
//}