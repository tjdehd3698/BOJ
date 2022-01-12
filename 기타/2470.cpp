
#include<iostream>
#include<algorithm>
using namespace std;

int n, sum=2000000001;;
pair<int, int> result ={0,0};
long long arr[100001];

int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];

    sort(arr+1,arr+n+1);

    for(int i=1,j=n;i!=j;){
        int difference = abs(arr[j]+arr[i]);

        if(difference==0){
            result = {arr[i],arr[j]};
            break;
        }

        if(difference<sum){
            sum =difference;
            result= {arr[i],arr[j]};
        }

        if(arr[j]+arr[i]<0) i++;
        else  j--;
    }

    cout<<result.first<<" "<<result.second<<"\n";

    return 0;
}