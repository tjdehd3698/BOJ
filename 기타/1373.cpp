#include<iostream>
#include<string>
using namespace std;

int main(){
    string data;
    cin>>data;

    int n=data.size();

    if(n%3==1) cout<<data[0];
    else if(n%3==2)cout<<((data[0]-'0')*2+(data[1]-'0'));
    
    for(int i=n%3;i<n;i+=3){
        cout << (data[i]-'0')*4 + (data[i+1]-'0')*2 + (data[i+2]-'0');
    }

    return 0;
}