#include<iostream>
#include<cmath>
using namespace std;

int n,r,c;
int result=0;

void cal(int size, int y, int x){
    if(size==2){
        if(y==r&&x==c){
            cout<<result<<"\n";
            return;
        }
        result++;
        if(y==r&&x+1==c){
            cout<<result<<"\n";
            return;
        }
        result++;
        if(y+1==r&&x==c){
            cout<<result<<"\n";
            return;
        }
        result++;
        if(y+1==r&&x+1==c){
            cout<<result<<"\n";
            return;
        }
        result++;
        return;
    }
    cal(size/2, y,x);
    cal(size/2,y,x+size/2);
    cal(size/2, y+size/2,x);
    cal(size/2, y+size/2, x+size/2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>r>>c;

    cal(n,0,0);

    return 0;
}