#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std; 

int t,n;
int arr[1001], dp[1001][1001];

int calculation(int left, int right, int seq){
    if(left>right) return 0;
    
    if(seq%2==1){
        dp[left][right] = max(arr[left]+calculation(left+1,right,seq+1),arr[right]+calculation(left,right-1,seq+1));
        return dp[left][right];
    }
    else{
        dp[left][right] = min(calculation(left+1,right,seq+1),calculation(left,right-1,seq+1));
        return dp[left][right];
    }
}

int main(){
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++) cin>>arr[j];
        
        int result=calculation(0,n-1,1);
        cout<<result<<"\n";
        memset(dp,0,sizeof(dp));
    }
    return 0;
    
}