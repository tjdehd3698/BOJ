#include<iostream>
#include<queue>
#include<math.h>
#include<string>
#include<cstring>
using namespace std;

const int MAX=10001;

bool prime[MAX];
int check[MAX];
int start,end;

void  eratos(){
    for(int i=2; i*i<MAX; i++){
        for(int j=2*i; j<MAX; j+=i){
            prime[j] = true;
        }
    }
}

void bfs(int s){
    queue<int> q;
    q.push(s);
    check[s]=0;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        
        for(int i=0;i<4;i++){
            string first = to_string(node);

            for(int j=0;j<10;j++){

                first[i] = j + '0';
                int next = stoi(first);

                if(next >= 1000 && !prime[next] && check[next]==-1){
                    check[next] = check[node] + 1;
                    q.push(next);
                }
            }
        }
    }
}


int main(){
    int t;
    int s,e;
    cin>>t;

    eratos();

    for(int i=0;i<t;i++){
        memset(check, -1, sizeof(check));
        cin>>s>>e;

        bfs(s);

        if(check[e] != -1){
            cout<<check[e]<<"\n";
        }
        else{
           cout<<"Impossible\n";
        }
    }

    return 0;
}