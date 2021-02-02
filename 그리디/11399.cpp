#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int arr[1000];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int result=0,tmp=0;
    for(int i=0;i<n;i++){
        result= result+arr[i]+tmp;
        tmp+=arr[i];
    }

    cout<<result<<"\n";

    return 0;
}