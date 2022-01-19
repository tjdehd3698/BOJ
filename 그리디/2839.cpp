#include<iostream>
using namespace std;

int dp[5006]={};
int n;

int main(){
    cin>>n;

    dp[3]=1;
    dp[5]=1;
    
    for(int i=3;i<=n;i++){
        if(dp[i]!=0){
            if(dp[i+3]==0||dp[i+3]>dp[i]+1)
                dp[i+3]=dp[i]+1;

            if(dp[i+5]==0||dp[i+5]>dp[i]+1)
                dp[i+5]=dp[i]+1;
        }
    }

    if(dp[n]==0)
        cout<<-1<<"\n";
    else
        cout<<dp[n]<<"\n";

    return 0;
}