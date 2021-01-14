//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int num[100001];
//	int DP[100001];
//	int size;
//	cin >> size;
//	
//	for (int i = 0; i < size; i++) cin >> num[i];
//	DP[0] = num[0];
//
//	int result= num[0];
//	for (int i = 1; i < size; i++) {
//		DP[i] = max(DP[i - 1] + num[i], num[i]);
//		if (result < DP[i])result = DP[i];
//	}
//
//	cout << result << endl;
//
//	return 0;
//}