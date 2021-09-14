#include<iostream>
#include<string>
#include<queue>
#include<cstring>
using namespace std;


int n, result1=0, result2=0;
char arr[100][100];
bool visited[100][100];

int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

void bfs(int v, int l) {
    queue<pair<int,int>> q;
    visited[v][l] = 1;
    q.push(make_pair(v,l));

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x+dx[i];
            int ny = y+dy[i];

            if (nx>=0 && ny>=0&&nx<n&&ny<n){
                if(!visited[nx][ny]){
                    if(arr[nx][ny]==arr[x][y]){
                        visited[nx][ny]=1;
                        q.push(make_pair(nx,ny));
                    }
                }
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

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (!visited[i][j]){
                bfs(i, j);
                result1++;
            }
        }
    }

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] == 'G') arr[i][j] = 'R';
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (!visited[i][j]){
                bfs(i, j);
                result2++;
            }
        }
    }

    cout<<result1<<" "<<result2<<"\n";
    return 0;
}