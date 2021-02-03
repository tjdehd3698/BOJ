#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

bool button[10];
int n,m;

bool check(int num){

    while(1){
        int x= num%10;

        if(button[x]) return false;

        num/=10;
        if(num==0)break;
    }

    return true;
}

int time(){
    int result=abs(n-100);

    for(int i = 0; i <= 1000000; i++){
        if(check(i)){
                int tmp = abs(n-i)+to_string(i).length();
                result = min(result,tmp);
        }
    }
    
    return result;

int main(){
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int b;
        cin>>b;
        button[b]=true;
    }

    int result= time();

    cout<<result<<"\n";

    return 0;
}