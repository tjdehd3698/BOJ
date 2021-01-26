#include<iostream>
#include<string>
#include<vector>
using namespace std;

string arr[64];

bool same(int x,int y,int size){
    for(int i=x;i<x+size;i++){
        for(int j=y;j<y+size;j++){
            if(arr[i][j]!=arr[x][y])
                return false;
        }
    }
    return true;
}

void divide(int x,int y,int size){
    if(size==1){
        cout<<arr[x][y];
        return;
    }
    if(same(x,y,size)){
        cout<<arr[x][y];
        return;
    }
    else{
         cout<<"(";
        for(int i=x;i<x+size;i+=size/2){
            for(int j=y;j<y+size;j+=size/2){
                divide(i,j,size/2);
            }
        }
         cout<<")";
    }
    return;
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(same(0,0,n))
        cout<<arr[0][0]<<"\n";
    else{
        divide(0,0,n);
        cout<<"\n";
    }

    return 0;
}