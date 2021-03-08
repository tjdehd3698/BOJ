#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100000;

int N, M;
int cash[MAX];

bool func(int mid){
        int num = 1;
        int sum = mid;

        for (int i = 0; i < N; i++){
                 //인출하는 양이 하루 쓸 돈보다 적으면 모순
                 if (mid < cash[i])
                    return false;
                 if (sum - cash[i] < 0){
                    sum = mid;
                    num++;
                }
            sum -= cash[i];
        }
    return M >= num;
}

int main(void)
{
        cin >> N >> M;

        int sum = 0;

        for (int i = 0; i < N; i++){
            cin >> cash[i];
            sum += cash[i];
        }

        int low = 1, high = sum;
        int result = 0;

        while (low <= high){
                 int mid = (low + high) / 2;

                 if (func(mid)){
                    result = mid;
                    high = mid - 1;
                 }
                 else
                    low = mid + 1;
        }

        cout << result << "\n";

        return 0;
}