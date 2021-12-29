#include<iostream>
#include<queue>
using namespace std;

int n, m;
int arr[1001][1001];
int visited[1001][1001][2];

struct A{
    int y,x,wall;
};

int X[4] = { 1,-1,0,0 };
int Y[4] = { 0,0,-1,1 };

int bfs(){
    queue<A> q;
    visited[1][1][0]=1;
    q.push({1,1,0});

    while(!q.empty()){
        A cur = q.front();
        q.pop();

        if (cur.y == n && cur.x == m) return visited[cur.y][cur.x][cur.wall];

        for(int i=0;i<4;i++){
            A next;
            next.y = cur.y+X[i];
            next.x = cur.x+Y[i]; 
            next.wall = cur.wall;

            if (next.y <= 0 || next.y > n || next.x <= 0 || next.x > m) continue;
            if (visited[next.y][next.x][cur.wall]) continue;

            if(!arr[next.y][next.x]){
                visited[next.y][next.x][next.wall]=visited[cur.y][cur.x][cur.wall]+1;
                q.push({ next.y,next.x,cur.wall });
            }
            if (arr[next.y][next.x] && !next.wall){
                next.wall =1;
                visited[next.y][next.x][next.wall]=visited[cur.y][cur.x][cur.wall]+1;
                q.push(next);
            }

        }
    }
    return 0;
}

int main(){
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<i<<endl;
    }

    cout<<bfs()<<"\n";


    return 0;
}