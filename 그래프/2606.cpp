#include<iostream>
#include<vector>
using namespace std;

int n, m;
vector<int> map[101];
bool visited[101];

int dfs(int v){
    visited[v] = 1;
    int cnt=0;
    for (int i = 0; i < map[v].size(); i++) {
        if (!visited[map[v][i]]) {
            cnt+=dfs(map[v][i])+1;
        }
    }
    return cnt;
}

int main(){
    cin>>n;
    cin>>m;

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        map[x].push_back(y);
        map[y].push_back(x);
    }

    cout<<dfs(1)<<"\n";

    return 0;
}