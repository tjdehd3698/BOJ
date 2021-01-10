#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Volunteer {
	int x, y;
public:
	Volunteer(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX() { return x; }
	int getY() { return y; }
};
bool compare(Volunteer v1, Volunteer v2) {
	if (v1.getX() < v2.getX())return true;
	else return false;
}

int main() {
	int time;
	int number;
	cin >> time;
	for (int i = 0; i < time; i++)
	{
		vector<Volunteer> v;
		cin>>number;
		for (int j = 0; j < number; j++)
		{
			int x, y;
			cin >> x >> y;
			v.push_back(Volunteer(x,y));
		}
		sort(v.begin(),v.end(), compare);
		int result = 1;
		int interview = v.front().getY();
		for (int j = 1; j < v.size(); j++)
		{
			if (v[j].getY() < interview)
			{
				result++;
				interview = v[j].getY();
			}
		}
		cout << result << endl;
	}
	return 0;
}