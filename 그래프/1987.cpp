#include<iostream>
#include<algorithm>
using namespace std;

char arr[20][20];
int w,l;
int result =0;
int dy[4]={1,-1,0,0};
int dx[4]={0,0,1,-1};
int alphabet[26]={0};

void dfs(int y,int x,int cnt){
    result=max(result,cnt);

    for(int i=0;i<4;i++){
        int ny=y+dy[i];
        int nx=x+dx[i];
        
        if(ny<0 || ny>=w || nx<0 || nx>=l)
            continue;
        
        int k=arr[ny][nx]-65;
        if(alphabet[k])
            continue;

        alphabet[k]++;
        dfs(ny,nx,cnt+1);
        alphabet[k]--;
    }

}

int main(){
    cin>>w>>l;

    for(int i=0;i<w;i++){
        for(int j=0;j<l;j++){
            cin>>arr[i][j];
        }
    }
    alphabet[arr[0][0]-65]++;
    dfs(0,0,1);

    cout<<result<<"\n";

    return 0;
}