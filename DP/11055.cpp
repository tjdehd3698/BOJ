//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int DP[1001];
//	int num[1001];
//	int time;
//	cin >> time;
//
//	for (int i = 0; i < time; i++)	cin >> num[i];
//
//	int m = 0;
//	int result = 0;
//
//	for (int i = 0; i < time; i++) {
//		for (int j = i-1; j >= 0; j--) {
//			if(num[i]>num[j])
//				m = max(m, DP[j]);
//		}
//		DP[i] = m + num[i];
//		m = 0;
//		if (DP[i] > result) result = DP[i];
//	}
//
//	cout << result << endl;
//
//	return 0;
//}