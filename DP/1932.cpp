#include<iostream>
#include<algorithm>
using namespace std;

int n,result=0;
int dp[500][500];

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cin>>dp[i][j];
        }
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0) dp[i][j]=dp[i-1][0]+dp[i][j];
            else if(j==i) dp[i][j]=dp[i-1][j-1]+dp[i][j];
            else dp[i][j]= max(dp[i-1][j-1] + dp[i][j], dp[i-1][j] + dp[i][j]);

            result= max(result, dp[i][j]);
        }
    }
    cout<<result<<"\n";

    return 0;
}