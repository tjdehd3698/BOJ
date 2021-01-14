#include<iostream>
using namespace std;

int main() {
	int size;
	cin >> size;

	int ar[100001];
	ar[0] = 1;
	ar[1] = 3;

	for (int i = 2; i <= size; i++)
	{
		ar[i] = (ar[i - 1] * 2 + ar[i - 2])%9901;
	}
	cout << ar[size]<< endl;

	return 0;
}