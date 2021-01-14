//#include<iostream>
//using namespace std;
//
//const int MOD = 1007;
//
//int main() {
//	int DP[1001][10];
//	int n, result=0;
//	cin >> n;
//
//    for (int i = 0; i < 10; i++) {
//        DP[1][i] = 1;
//    }
//
//    for (int i = 2; i <= n; i++) {
//        for (int j = 0; j < 10; j++) {
//            for (int k = j; k < 10; k++) {
//                DP[i][j] = (DP[i][j] + DP[i - 1][k]) % 10007;
//            }
//        }
//    }
//
//
//	for (int i = 1; i <= 9; i++)result += DP[n][i];
//	cout << result % MOD << endl;
//
//	return 0;
//}