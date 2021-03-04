#include<iostream>
using namespace std;

int arr[101][101];
long long dp[101][101];
int n;

void cal(){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == 0 || (i == n - 1 && j == n - 1)) {
                continue;
            }
 
            int dist = arr[i][j];
            int down = dist + i;
            int right = dist + j;
 
            if (down < n) {
                dp[down][j] += dp[i][j];
            }
 
            if (right < n) {
                dp[i][right] += dp[i][j];
            }
        }
    }
}

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }
    dp[0][0] = 1;

    cal();
    
    cout<<dp[n-1][n-1]<<"\n";
    return 0;
}