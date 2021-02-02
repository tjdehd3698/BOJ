#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Time{
    int s,e;
};
vector<Time> arr;

bool compare(Time a, Time b) { 
    if(a.e==b.e){
        return a.s<b.s;
    }
    return a.e < b.e;
}

int main(){
    int n, result=1;
    cin>>n;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        arr.push_back({x,y});
    }

    sort(arr.begin(),arr.end(),compare);

    int end= arr[0].e;
    
    for(int i=1;i<arr.size();i++){
        if(end<=arr[i].s){
            result++;
            end=arr[i].e;
        }
    }

    cout<<result<<"\n";

    return 0;
}