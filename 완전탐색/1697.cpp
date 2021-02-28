#include<iostream>
#include<algorithm>
#include<math.h>
#include<queue>
using namespace std;

bool visited[100001];


int bfs(int n, int m){
    int time=0;
    queue<int> q;
    q.push(n);

    while(1){
        int size= q.size();
        
        for(int i=0;i<size;i++){
            int f= q.front();
            q.pop();
            
            if(f==m)return time;
            
            if(f > 0 && !visited[f-1]) {
                q.push(f-1);
                visited[f-1] = true;
            }
            if(f < 100000 && !visited[f+1]) {
                q.push(f+1);
                visited[f+1] = true;
            }
            if(f*2 <= 100000 && !visited[f*2]) {
                q.push(f*2);    
                visited[f*2] = true;
            }
        }
        time++;
    }
}

int main(){
    int n,m,result;
    cin>>n>>m;

    result =bfs(n,m);
    
    cout<<result<<"\n";

    return 0;
}