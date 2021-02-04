#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

vector<int> v;
int arr[8];
bool visited[8];
int n, result=0;

void Calcutate(){
    int sum=0;
    for(int i=0;i<v.size()-1;i++){
        sum+=abs(v[i]-v[i+1]);
    }
    result = max(result,sum);
}

void dfs(int num){
    if(num==n){
        Calcutate();
        return;
    }

    for (int i = 0; i < n; i++){
        if (visited[i] == true) continue;
        visited[i] = true;
        v.push_back(arr[i]);
        dfs(num + 1);
        visited[i] = false;
        v.pop_back();
    }

}

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    dfs(0);

    cout<<result<<"\n";

    return 0;
}