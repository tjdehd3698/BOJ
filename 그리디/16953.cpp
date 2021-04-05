#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int a,b,result=-1;
struct S{
    int time,num;
};

void bfs(){
    queue<S> q;
    q.push({1,a});
    while(!q.empty()){
        S s= q.front();
        q.pop();
        if(s.num==b){
            result=max(result,s.time);
        }

        if(s.num<b/10+1){
            q.push({s.time+1,s.num*10+1});
        }
        if(s.num<b/2+1){
            q.push({s.time+1,s.num*2});
        }
    }
}

int main(){
    cin>>a>>b;

    bfs();
    cout<<result<<"\n";

    return 0;
}