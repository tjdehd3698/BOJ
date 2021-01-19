#include<iostream>
#include<queue>
#include<algorithm>
#include<cstring>
using namespace std;

struct Point{
    int x,y;
};
int n;
int dy[4] = { 0, 1, 0, -1 };
int dx[4] = { -1, 0, 1, 0 };
int arr[100][100]={false,};
bool visited[100][100]={false,};

int bfs(int cnt){                   //각 섬의 크기만큼 bfs실행
    queue<Point> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==cnt){
                visited[i][j]=true;
                q.push({i,j});
            }
        }
    }

    int result=0;
    while(!q.empty()){
        int size= q.size();
        for(int i=0;i<size;i++){
            int x = q.front().x;
            int y = q.front().y;
            q.pop();

            for(int j=0;j<4;j++){
                int nX= x+dx[j];
                int nY= y+dy[j];

                if(0<=nX&&nX<n&&0<=nY&&nY<n){
                    if(arr[nX][nY]&&arr[nX][nY]!=cnt){
                        return result;
                    }
                    else if(!arr[nX][nY] && !visited[nX][nY]){
                        visited[nX][nY]=true;
                        q.push({nX,nY});
                    }
                }

            }
        }
        result++;
    }
}

void dfs(int x,int y,int cnt){      //각 섬의 위치 파악위해 섬마다 고유의 cnt부여
    visited[x][y]= true;
    arr[x][y]=cnt;

    for (int i = 0; i < 4; i++){
        int nX = x + dx[i];
        int nY = y + dy[i];

        if (0 <= nY && nY < n && 0 <= nX && nX < n){
            if (arr[nX][nY] && !visited[nX][nY]){
                    dfs(nX, nY, cnt);
                }
        }

    }
}

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]&&!visited[i][j])
                dfs(i,j,cnt++);
        }
    }

    int result=1000000;
    for(int i=1;i<cnt;i++){
        memset(visited, false, sizeof(visited));
        result = min(result, bfs(i));
    }

    cout<<result<<"\n";

    return 0;
}