#include<iostream>
#include<string>
#include<vector>
using namespace std;

string s;
vector<string> v;

int cal() {
    int result = stoi(v[0]);

    for (int i = 1; i < v.size(); i++) {
        string num = v[i];

        if (!num.compare("+")) {
            result += stoi(v[i + 1]);
            i++;
        }
        else if (!num.compare("-")) {
            for (int j = i + 1; j < v.size(); j++) {

                if (!v[j].compare("-")) {
                    i = j - 1;
                    break;
                }

                else if (v[j].compare("+")) {
                    result -= stoi(v[j]);
                }

                if(j==v.size()-1)
                    return result;
            }
        }
    }

    return result;
}

int main() {
    cin >> s;

    string tmp = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+' || s[i] == '-') {
            if (tmp.compare("")) {
                v.push_back(tmp);
                tmp = "";
            }
            v.push_back(tmp + s[i]);
        }
        else {
            tmp += s[i];
        }
    }
    v.push_back(tmp);

    cout << cal() << "\n";


    return 0;
}