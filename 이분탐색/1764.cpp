#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int n,m;

vector<string> listen;

bool check(int left, int right, string name){
    if(left>right) return false;
    else{
        int mid = (left+right)/2;

        if(!listen[mid].compare(name))
            return true;
        if(listen[mid]>name)
            return check(left,mid-1,name);
        else
            return check(mid+1,right,name);
    }

}

int main(){
    long long left=1,right=0;

    cin>>n>>m;

    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        listen.push_back(name);
    }

    sort(listen.begin(),listen.end());

    vector<string> result;

    for(int i=0;i<n;i++){
        string name2;
        cin>>name2;
        
        if(check(0,listen.size()-1, name2))
            result.push_back(name2);
    }

    sort(result.begin(),result.end());

    cout<<result.size()<<"\n";
    for(int i=0;i<result.size();i++)
        cout<<result[i]<<"\n";

    return 0;
}