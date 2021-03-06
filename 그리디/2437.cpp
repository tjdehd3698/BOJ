#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
vector<int> v;

int main(){
    cin>>n;
    
    for(int i=0;i<n;i++){
        int chu;
        cin>>chu;
        v.push_back(chu);
    }
    
    sort(v.begin(),v.end());

    if(v[0]!=1){
        cout<<1<<"\n";
        return 0;
    }
    else{
        int tmp=1;
        for(int i=1;i<v.size();i++){
            if(tmp+1<v[i])
                break;
            tmp+=v[i];
        }
        cout<<tmp+1<<"\n";
    }

    return 0;
}