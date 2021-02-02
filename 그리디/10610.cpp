#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool cmp(char a, char b){
    if (a > b)
        return true;
    return false;
}

int main(){
    string s;
    cin>>s;

    int sum=0;
    bool check=false;

    for(int i=0;i<s.size();i++){
        sum += (s[i] - '0');
        if(s[i]=='0'){
            check= true;
        }
    }
    
    if(!check)cout<<-1<<"\n";

    else{
        if(sum%3==0){
            sort(s.begin(),s.end(),cmp);
            cout<<s<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
   
    return 0;
}