#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	string n;
	cin >> n;
	int result = 0;

	stack<char> s;

	for (int i = 0; i < n.length(); i++) {
		if (n[i] == '(') {
			s.push(n[i]);
		}
		else {
			s.pop();
			if (n[i - 1] == '(') {
				result += s.size();
			}
			else {
				result++;
			}
		}
	}

	cout << result << '\n';

	return 0;
}