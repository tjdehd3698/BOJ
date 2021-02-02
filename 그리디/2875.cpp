#include<iostream>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;

    int team= 0;
    while (n >= 2 && m >= 1 && n + m >= 3 + k) {
        n -= 2;
        m--;
        team++;
    }

    cout<<team<<"\n";

    return 0;
}