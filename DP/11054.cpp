#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int list[1001];
	int reverse[1001];
	int num[1001];
	int time;

	cin >> time;
	for (int i = 0; i < time; i++)	cin >> num[i];

	int m = 0;
	for (int i = 0; i < time; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (num[i] > num[j])
				m = max(m, list[j]);
		}
		list[i] = m + 1;
		m = 0;
	}

	for (int i = time-1; i>=0; i--) {
		for (int j = i + 1; j <time; j++) {
			if (num[i] > num[j])
				m = max(m, reverse[j]);
		}
		reverse[i] = m + 1;
		m = 0;
	}
	
	int result = 0;
	for (int i = 0; i < time; i++) {
		list[i] += reverse[i];
		if (result < list[i])result = list[i];
	}

	cout << result - 1 << endl;

	return 0;
}