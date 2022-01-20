#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 1001;
int n,l;
int pipe[MAX];
bool taped[MAX]; 

int main(void){
    cin>>n>>l;

    int result = 0;
    for (int i=0;i<n;i++)
        cin >> pipe[i];

    sort(pipe, pipe + n);

    for(int i=0; i<n; i++){
        if (!taped[pipe[i]]){
            for (int j = pipe[i]; j < min(pipe[i] + l, MAX); j++){
                taped[j] = true;
            }
            result++;
        }
    }
    cout << result << "\n";

    return 0;
}