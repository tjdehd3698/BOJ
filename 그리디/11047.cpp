#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int n,k,result=0;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i>=0;i--){
        if(k==0)
            break;
        if(k>=arr[i]){
            result+=k/arr[i];
            k%=arr[i];
        }
    }

    cout<<result<<"\n";

    return 0;
}