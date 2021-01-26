#include<iostream>
using namespace std;

int main(){
    int time;
    cin>>time;
    int cnt=0;

    for(int i=0;i<time;i++){
        int num,j;
        cin>>num;
        for(j=2;j<num;j++){
            if(num%j==0){
                break;
            }
        }
        if(j==num)cnt++;
    }

    cout<<cnt<<"\n";

    return 0;
}