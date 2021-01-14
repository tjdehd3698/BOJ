#include<iostream>
#include<string>
using namespace std;

int main() {
	string  n;
	cin >> n;

    int DP[5001] = { 0, };
	DP[0] = 1;
	DP[1] = 1;


    if (n[0] == '0')
    {
        cout << 0 << endl;;
        return 0;
    }

    for (int i = 2; i <= n.size(); i++)
    {
        char a = n[i - 1], b = n[i - 2];
        if (a == '0' && b == '0')
        {
            cout << 0 << endl;
            return 0;
        }
        if (a != '0') DP[i] += DP[i - 1];
        if (b != '0') 
        {
            int num = (b - '0') * 10 + (a - '0');
            if (num <= 26) DP[i] += DP[i - 2];
        }
        DP[i] %= 1000000;
    }

    cout << DP[n.size()] << endl;

	return 0;
}