#include<iostream>
#include<algorithm>
using namespace std;

long long arr[200000];
int n,c;

bool check(int point){
    int cnt=1;
    int previous=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-previous>=point){
            cnt++;
            previous=arr[i];
        }
    }
    return cnt>=c;
}

int main(){
    cin>>n>>c;

    int left=1,right=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    right=arr[n-1]-arr[0];
    
    int result=0;
    while(left<=right){
        int mid= (left+right)/2;
        if(check(mid)){
             if(result<mid)
                result=mid;
            left=mid+1;
        }
        else right=mid-1;
    }

    cout<<result<<"\n";

    return 0;
}