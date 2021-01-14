//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int time;
//	cin >> time;
//
//	for (int i = 0; i < time; i++)
//	{
//		int size;
//		cin >> size;
//		int score[2][100001];
//		int DP[2][100001];
//
//		for (int j = 0; j < size; j++)cin >> score[0][j];
//		for (int j = 0; j < size; j++)cin >> score[1][j];
//
//		DP[0][0] = score[0][0];
//		DP[1][0] = score[1][0];
//		DP[0][1] = score[0][1] + DP[1][0];
//		DP[1][1] = score[1][1] + DP[0][0];
//
//
//		for (int i = 2; i < size; i++)
//		{
//			DP[0][i] = score[0][i] + max(DP[1][i - 1], DP[1][i - 2]);
//			DP[1][i] = score[1][i] + max(DP[0][i - 1], DP[0][i - 2]);
//		}
//
//		cout << max(DP[0][size - 1], DP[1][size - 1]) << endl;
//	}
//	return 0;
//}