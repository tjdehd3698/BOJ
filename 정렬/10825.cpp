#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Student {
public:
	int korean;
	int math;
	int english;
	string name;

	Student(){}
	Student(string n, int k, int m, int e) {
		korean = k;
		math = m;
		english = e;
		name = n;
	}
	bool operator <(Student& student) {
		if (this->korean == student.korean) {
			if (this->english == student.english)
			{
				if (this->math == student.math)
				{
					return this->name <student.name;
				}
				else return this->math > student.math;
			}
			else return this->english < student.english;
		}
		else return this->korean > student.korean;
	}
};

int main() {
	int n;
	cin >> n;
	Student arr[100000];

	for (int i = 0; i < n; i++) {
		string n;
		int m, k, e;

		cin >> n >> k >> e >> m;
		arr[i] = Student(n, k, m, e);
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)cout << arr[i].name << '\n';

	return 0;
}