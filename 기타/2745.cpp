#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    string n;
    int b;

    cin>>n>>b;
    int size= n.size();
    int result=0;
    int cnt=1;

    for(int i=size-1;i>=0;i--){
        int tmp;
        if (n[i] >= '0' && n[i] <= '9') tmp = n[i] - '0';
        else tmp = n[i] - 'A' + 10;

        tmp*=cnt;
        result+=tmp;
        cnt*=b;
    }

    cout<<result<<"\n";

    return 0;
}