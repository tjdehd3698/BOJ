#include<iostream>
#include<vector>
using namespace std;

int cnt; 
vector<int> arr[100001];
bool visited[100001]={false,};
int parent[100001]={0,};

void dfs(int start){
    visited[start]=true;

    for(int i=0;i<arr[start].size();i++){
        int next= arr[start][i];
        if(!visited[next]){
            parent[next]=start;
            dfs(next);
        }
    }
}


int main(){
    cin>>cnt;

    for(int i=0;i<cnt;i++){
        int node1,node2;
        cin>>node1>>node2;

        arr[node1].push_back(node2);
        arr[node2].push_back(node1);
    }

    dfs(1);

    for(int i=2;i<=cnt;i++){
        cout<<parent[i]<<"\n";
    }


    return 0;
}