#include<iostream>
using namespace std;

int main() {
	int number;
	cin >> number;
	
	int arr[1000001];
	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;

	for (int i = 4; i <= number; i++) {
		arr[i] = arr[i - 1];
		if (i % 2 == 0 && arr[i] > arr[i / 2]) arr[i] = arr[i / 2];
		if (i % 3 == 0 && arr[i] > arr[i / 3]) arr[i] = arr[i / 3];
		arr[i]++;
	}
	cout << arr[number] << endl;
	return 0;
}