#include<iostream>
#include<string>
#include<deque>
using namespace std;

int n,k;
string num;
deque<char> dq;

int main(){
    cin>>n>>k;
    cin>>num;

    for(int i=0;i<num.length();i++){
       while(!dq.empty()&&k&&dq.back()<num[i]){
           dq.pop_back();
           k--;
       }
       dq.push_back(num[i]);
    }

    for(int i=0;i<dq.size();i++){
        cout<<dq[i];
    }
    cout<<"\n";

    return 0;
}