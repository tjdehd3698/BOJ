#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vec;
    for (int i = 1; i <= n; i++){
        int num = i;

        for (int j = 2; j * j <= i; j++){
            while (num % j == 0){
                vec.push_back(j);
                num = num / j;
            }
        }

        if (num > 1)
            vec.push_back(num);
    }
    
    cout << count(vec.begin(), vec.end(), 5) << endl;
}