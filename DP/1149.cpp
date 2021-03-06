#include<iostream>
#include<algorithm>
using namespace std;

int n;
int dp[1001][3];
int red[1001];
int green[1001];
int blue[1001];

int cal(){

}

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>red[i]>>green[i]>>blue[i];
    }

    dp[0][0]= red[0];
    dp[0][1]= green[0];
    dp[0][2]= blue[0];

    for(int i=1;i<n;i++){
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + red[i];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + green[i];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + blue[i];
    }

    cout<<min(min(dp[n-1][0],dp[n-1][1]),dp[n-1][2])<<"\n";

    return 0;
}