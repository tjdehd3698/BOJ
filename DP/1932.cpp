#include<iostream>
using namespace std;

int n, result=0;
int dp[501][501]={0};

int main(){
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int num;
            cin>>num;
            dp[i][j]+=num;
            if(dp[i][j]>result)
                result = dp[i][j];
            if(i==n) continue;
            if(dp[i+1][j]<dp[i][j]){
                dp[i+1][j]=dp[i][j];
            }
            if(dp[i+1][j+1]<dp[i][j]){
                dp[i+1][j+1]=dp[i][j];
            }
        }
    }

    cout<<result<<"\n";

    return 0;
}