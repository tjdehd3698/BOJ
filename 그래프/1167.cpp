#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int n;
vector<pair<int,int>> arr[100001];
bool visited[100001]={false,};
int wide = 0;
int farthestNode = 0;

void dfs(int start,int distance){
    if(visited[start])return;
    visited[start]=true;
    
    if(distance>wide){
        wide=distance;
        farthestNode=start;
    }

    for(int i=0;i<arr[start].size();i++){
        dfs(arr[start][i].first,distance+arr[start][i].second);
    }
}

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        int start, end, distance;
        cin>>start;
        while(true){
            cin>>end;
            if(end==-1)break;
            cin>>distance;
            arr[start].push_back({end,distance});
        }
    }

    dfs(1,0);       //root에서 가장 먼 node를 찾는다
    memset(visited, false, sizeof(visited));
    wide=0;
    dfs(farthestNode,0);    //가장 먼것에서 젤 먼 노드를 찾는다.

    cout<<wide<<"\n";

    return 0;
}