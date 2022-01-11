#include <iostream>
#include <vector>
using namespace std;

int n,k;
int arr[100];
int dp[10001];

int main(){
    cin>>n>>k;

    for(int i=0;i<n;i++) 
        cin>>arr[i];

    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j= arr[i];j<=k;j++){
            dp[j] += dp[j - arr[i]];
        }
    }

    cout<<dp[k];

    return 0;
}