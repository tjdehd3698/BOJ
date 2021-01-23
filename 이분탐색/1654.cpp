#include<iostream>
using namespace std;

long long arr[10001];
int k,n;

bool check(long long mid){
    int tmp=0;
    for(int i=0;i<k;i++){
        tmp+=(arr[i]/mid);
    }
    return tmp >= n;
}

int main(){
    long long left=1,right=0;
    cin>>k>>n;
    
    int result=0;
    for(int i=0;i<k;i++){
        long long line;
        cin>>line;
        arr[i]=line;
        if(right<line) right=line;
    }

    while(left<=right){
        long long mid = (left+right)/2;
        
        if(check(mid)){
            if(result<mid) result=mid;
            left= mid+1;
        }
        else{
            right=mid-1;
        }
    }

    cout<<result<<"\n";

    return 0;
}