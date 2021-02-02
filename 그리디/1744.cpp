#include<iostream>
#include<algorithm>
using namespace std;

int arr[10000];

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int result=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0)break;
        if(arr[i]<0){
            if(arr[i+1]<=0&&i+1<n){
                result+=(arr[i++]*arr[i]);
            }
            else{
                result+=arr[i];
            }
        }
    }
    
    for(int i=n-1;i>=0;i--){
        if(arr[i]<0)break;
        if(arr[i]>0){
            if(arr[i-1]>0&&i>0){
                if(arr[i-1]==1) result+=arr[i];
                else result+=(arr[i--]*arr[i]);
            }
            else{
                result+=arr[i];
            }
        }
    }

    cout<<result<<"\n";

    return 0;
}