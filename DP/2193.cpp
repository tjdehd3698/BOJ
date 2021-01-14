//#include<iostream>
//using namespace std;
//
//int main() {
//	long long DP[91][2];
//	int n;
//	cin >> n;
//
//	DP[1][0] = 0;
//	DP[1][1] = 1;
//
//	for (int i = 2; i <= n; i++) {
//		DP[i][0] = (DP[i - 1][0] + DP[i - 1][1]);
//		DP[i][1] = DP[i - 1][0];
//	}
//	
//	cout << DP[n][0] + DP[n][1] << endl;
//	
//
//	return 0;
//}