#include<iostream>
using namespace std;

int main() {
	int time;
	cin >> time;
	for (int i = 0; i < time; i++) {
		int con, pln;
		cin >> con >> pln;
		for (int j = 0; j < pln; j++)
		{
			int a, b;
			cin >> a >> b;
		}
		cout << con - 1 << endl;
	}

	return 0;
}