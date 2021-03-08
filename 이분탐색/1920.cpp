#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
int arr[100000];

void check(int num){
    int l = 0, r = n-1, mid;

    while(l<=r){
            mid= (l+r)/2;

            if(arr[mid]==num){
                cout<<1<<"\n";
                return;
            }
            if(arr[mid]>num){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        cout<<0<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    cin>>n;

    int left = 0,right = 0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    cin>>m;
    for(int i=0;i<m;i++){
        int num;
        cin>>num;

        check(num);
    }
    
    return 0;
}