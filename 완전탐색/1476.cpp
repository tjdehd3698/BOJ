#include<iostream>
using namespace std;

int main(){
    int e,s,m;
    cin>>e>>s>>m;

    int result=1;
    while(1){
        if((e-result)%15==0&&(s-result)%28==0&&(m-result)%19==0){
            break;
        }
        result++;
    }

    cout<<result<<"\n";
    return 0;
}