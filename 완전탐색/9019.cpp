#include<iostream>
#include<string>
#include<cstring>
#include<queue>
using namespace std;

bool visited[10001];
int s,e;

string bfs(){
    queue<pair<int, string>> q;
    q.push(make_pair(s,""));

    while(!q.empty()){
        int first = q.front().first;
        string second = q.front().second;
        q.pop();

        if(first==e){
            return second;
        }

        int cur= (2*first)%10000;
        if (!visited[cur]){
            visited[cur] = true;
            q.push(make_pair(cur, second+"D"));
        }
        
        cur= first-1;
        if(cur==-1) cur= 9999;
        if(!visited[cur]){
            visited[cur]= true;
            q.push(make_pair(cur,second+"S"));
        }

        cur= (first % 1000) * 10 + first / 1000;
        if (!visited[cur]){
            visited[cur] = true;
            q.push(make_pair(cur, second+"L"));
        }

        cur= (first % 10) * 1000 + first / 10;
        if (!visited[cur]){
            visited[cur] = true;
            q.push(make_pair(cur, second+"R"));
        }
    }

}


int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>s>>e;

        cout<<bfs()<<"\n";

        memset(visited,false,sizeof(visited));
    }

    return 0;
}