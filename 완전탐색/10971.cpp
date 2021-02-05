#include<iostream>
#include<algorithm>
using namespace std;

int arr[10][10];
bool visited[10]={false,};
int n,result=10000001;

void dfs(int x,int y, int sum,int cnt){
    //cout<<cnt<<"  ==  "<<x<<","<<y<<" : "<<sum<<endl;
    if(cnt == n && x == y){
        if(result > sum) result = sum;
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[y][i]>0&&!visited[y]){
            sum+=arr[y][i];
            visited[y]=true;
            dfs(x,i,sum,cnt+1);
            visited[y]=false;
            sum-=arr[y][i];
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

    for(int i=0;i<n;i++){
        dfs(i, i, 0, 0);
    }


    cout<<result<<"\n";

    return 0;
}