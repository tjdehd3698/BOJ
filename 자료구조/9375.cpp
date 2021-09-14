#include <iostream>
#include <string>
#include<vector>
#include<sstream>
#include<map>
using namespace std;

int time, n;


int main()
{
    string clothes, spe;
    cin >> time;
    for (int i = 0; i < time; i++)
    {
        map<string, int> map;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> spe;
            cin >> clothes;
            if (map.find(clothes) == map.end()) {
                map.insert(make_pair(clothes, 1));

            }
            else {
                map[clothes] = map[clothes] + 1;
            }
        }
        int anw = 1;
        for (auto iter = map.begin(); iter != map.end(); iter++) {
            anw *= (iter->second+1);
        }

        if (map.size()==0) {
            cout << 0 << "\n";
        }
        else {
            cout << anw-1 << "\n";
        }
    }

    return 0;
}