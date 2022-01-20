#include<iostream>
using namespace std;

int t,n;
int arr[1000001];

int main(){
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>n;

        int max =0;
        long long profit = 0;

        for(int j=0;j<n;j++){
            cin>>arr[j];
        }

        for(int j=n-1;j>=0;j--){
            if(arr[j]>max){
                max=arr[j];
            }
            else{
                profit += max-arr[j];
            }
        }

        cout<<profit<<"\n";
    }

    return 0;
}