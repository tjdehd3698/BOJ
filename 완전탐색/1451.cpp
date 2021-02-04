#include<iostream>
#include<algorithm>
using namespace std;

int arr[101][101];
int n,m;
long long result=0;

long long getSum(int x1, int y1, int x2, int y2) {
    long long sum = 0;
    for (int i = x1; i <= x2; i++) {
		for (int j = y1; j <= y2; j++) {
			sum += arr[i][j];
		}
	}
    return sum;
}

int main(){
    cin>>n>>m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char tmp;
            cin >> tmp;
            arr[i][j] = tmp-'0';
        }
    }

	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			long long square1 = getSum(0, 0, i, m - 1);
			long long square2 = getSum(i + 1, 0, j, m - 1);
			long long square3 = getSum(j + 1, 0, n - 1, m - 1);
			result = max(result, square1*square2*square3);
		}
	}

	for (int i = 0; i < m - 2; i++) {
		for (int j = i + 1; j < m - 1; j++) {
			long long square1 = getSum(0, 0, n - 1, i);
			long long square2 = getSum(0, i + 1, n - 1, j);
			long long square3 = getSum(0, j + 1, n - 1, m - 1);
			result = max(result, square1*square2*square3);
		}
	}

	for (int i = m - 1; i > 0; i--) {
		for (int j = 0; j < n - 1; j++) {
			long long square1 = getSum(0, i, n - 1, m - 1);
			long long square2 = getSum(0, 0, j, i - 1);
			long long square3 = getSum(j + 1, 0, n - 1, i - 1);
			result = max(result, square1*square2*square3);
		}
	}

	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			long long square1 = getSum(0, 0, n - 1, i);
			long long square2 = getSum(0, i + 1, j, m - 1);
			long long square3 = getSum(j + 1, i + 1, n - 1, m - 1);
			result = max(result, square1*square2*square3);
		}
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < m - 1; j++) {
			long long square1 = getSum(0, 0, i, m - 1);
			long long square2 = getSum(i + 1, 0, n - 1, j);
			long long square3 = getSum(i + 1, j + 1, n - 1, m - 1);
			result = max(result, square1*square2*square3);
		}
	}

	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < m - 1; j++) {
			long long square1 = getSum(i, 0, n - 1, m - 1);
			long long square2 = getSum(0, 0, i - 1, j);
			long long square3 = getSum(0, j + 1, i - 1, m - 1);
			result = max(result, square1*square2*square3);
		}
	}

    cout<<result<<"\n";
    
    return 0;
}