#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

int n;
bool visited[1001][1001];

struct Data{
    int imo,clip,time;
};

int bfs(){
    queue<Data> q;
    q.push({1,0,0});
    visited[1][0] = true;
    
    while(!q.empty()){
        int imo = q.front().imo;
        int clip= q.front().clip;
        int time = q.front().time;
        q.pop();

        if(imo == n )return time;
        if (0 < imo && imo < 1001) {
            if(!visited[imo][imo]){
                visited[imo][imo]=true;
                q.push({imo,imo,time+1});
            }
            if(clip>0&&imo+clip<1001){
                if(!visited[imo+clip][clip]){
                    visited[imo+clip][clip]=true;
                    q.push({imo+clip,clip,time+1});
                }
            }
            if(!visited[imo-1][clip]){
                visited[imo-1][clip]=true;
                q.push({imo-1,clip,time+1});
            }
        }
    }
}

int main(){
    cin>>n;
    cout<<bfs()<<"\n";
    return 0;
}