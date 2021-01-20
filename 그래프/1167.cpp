#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int n;
vector<pair<int,int>> arr[100001];
bool visited[100001]={false,};
int wide = 0;
int farthestNode = 0;

void dfs(int start, int cost){
    if (visited[start])
        return;
    visited[start]=true;
    if(wide<cost){
        wide = cost;
        farthestNode= start;
    }

    for(int i=0;i<arr[start].size();i++){
         dfs(arr[start][i].first, cost+arr[start][i].second);
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

    dfs(1,0);
    memset(visited, false, sizeof(visited));
    wide=0;
    dfs(farthestNode,0);

    cout<<wide<<"\n";

    return 0;
}