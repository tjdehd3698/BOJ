#include<iostream>
using namespace std;

int n;
int cnt[3]={0,};
int arr[2200][2200];

bool checkSame(int x,int y,int size){
    for(int i=x;i<x+size;i++){
        for(int j=y;j<y+size;j++){
            if(arr[x][y]!=arr[i][j]){
                return false;
            }
        }
    }
    return true;
}

void divide(int x,int y,int size){
    if(checkSame(x,y,size)){
        cnt[1-arr[x][y]]++;
    }
    else{
        for(int i=x;i<x+size;i+=size/3){
            for(int j=y;j<y+size;j+=size/3){
                divide(i,j,size/3);
            }
        }
    }
}

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }

    divide(0,0,n);

    cout<<cnt[2]<<"\n";
    cout<<cnt[1]<<"\n";
    cout<<cnt[0]<<"\n";

    return 0;
}