#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

int n,m;
vector<int> arr[10001];
bool visited[10001];
vector<int> result;

int bfs(int v){
    queue<int> q;
    q.push(v);
    visited[v]=true;
    int cnt=0;

    while(!q.empty()){
        v= q.front();
        q.pop();

        for(int i=0;i<arr[v].size();i++){
            if(!visited[arr[v][i]]){
                q.push(arr[v][i]);
                visited[arr[v][i]]=true;
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    cin>>n>>m;
    int a,b;
    int tmp=0;
    
    for(int i=0;i<m;i++){
        cin>>a>>b;
        arr[b].push_back(a);
    }

    for(int i=1;i<=n;i++){
        int cnt = bfs(i);

        if(cnt==tmp){
            result.push_back(i);
        }
        else if(tmp<cnt){
            result.clear();
            tmp=cnt;
            result.push_back(i);
        }
        
        memset(visited,false,sizeof(visited));
    }

    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<"\n";
    }

    return 0;
}