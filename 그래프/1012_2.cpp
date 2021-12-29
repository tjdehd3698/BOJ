#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

int arrX[4] = {-1,0,1,0};
int arrY[4] = {0,1,0,-1};

int t;
int m,n,k;
int result = 0;

bool arr[50][50];
bool visited[50][50];


void bfs(int x, int y){
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));

    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        visited[a][b]=true;

        for(int i=0;i<4;i++){
            int nx = a+arrX[i];
            int ny = b+arrY[i];
            if(nx>=0&&ny>=0&&nx<n&&ny<m&&arr[nx][ny]&&!visited[nx][ny]){
                visited[nx][ny]=true;
                q.push(make_pair(nx,ny));
            }
        }
    }
}

int main(){
    cin>>t;

    for(int i=0;i<t;i++){
        memset(visited, false, sizeof(visited));
        memset(arr, false, sizeof(arr));
        result =0;
        cin>>m>>n>>k;
        for(int j=0;j<k;j++){
            int x,y;
            cin>>y>>x;
            arr[x][y]=true;
        }

        for(int j=0;j<n;j++){
            for(int l=0;l<m;l++){
                if(!visited[j][l]&&arr[j][l]){
                    bfs(j,l);
                    result++;
                }
            }
        }
        cout<<result<<"\n";
    }

    return 0;
}