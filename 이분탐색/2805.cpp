#include<iostream>
using namespace std;

long long n,m;
long long arr[1000000];

//mid를 기준점으로 설정 시 길이를 채울 수 있는지 확인 
bool check(long long mid){  
    long long result=0;

    for(int i=0;i<n;i++){
        long long piece = arr[i]-mid;
        if(piece>0) result += piece;
    }

    return result >= m;
}

int main(){
    cin>>n>>m;

    int result=0;
    long long left=0,right=0;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(right<arr[i]) right=arr[i];
    }
    
    while(left<=right){
        long long mid= (left+right)/2;

        if(check(mid)){
            if(result<mid)
                result=mid;
            left=mid+1;
        }
        else{
            right= mid -1;
        }
    }

    cout<<result<<"\n";

    return 0;
}