#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n, a,b,m;
vector<int> v[101];
bool visited[101];
int result=0;

void dfs(int s, int cnt){
    if(s==b){
        result=max(result,cnt);
    }
    visited[s]=1;
    for(int i=0;i<v[s].size();i++){
        if(!visited[v[s][i]]){
            dfs(v[s][i],cnt+1);
        }
    }
}

int main(){
    cin>>n>>a>>b>>m;

    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(a,0);
    if(result!=0)
        cout<<result<<"\n";
    else
        cout<<-1<<"\n";

    return 0;
}