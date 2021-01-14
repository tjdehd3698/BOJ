//#include<iostream>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	long long arr[1001];
//	arr[0] = 0;
//	arr[1] = 1;
//	arr[2] = 2;
//	for (int i = 3; i <= n; i++) {
//		arr[i] = (arr[i - 1] + arr[i - 2]) % 1007;
//	}
//	cout << arr[n] << endl;
//	return 0;
//}