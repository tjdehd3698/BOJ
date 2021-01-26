#include<iostream>
using namespace std;

char arr[4000][7000];

void star(int n,int x,int y){
    if(n==3){
        arr[x][y]='*';
        arr[x+1][y-1]='*';
        arr[x+1][y+1]='*';
        arr[x+2][y-2]='*';
        arr[x+2][y-1]='*';
        arr[x+2][y]='*';
        arr[x+2][y+1]='*';
        arr[x+2][y+2]='*';
        return;
    }

    star(n/2, x,y);
    star(n/2,x+(n/2),y+(n/2));
    star(n/2, x+(n/2),y-(n/2));

}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n*2;j++)
            arr[i][j]=' ';
    }

    star(n,0,n-1);

    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }


    return 0;
}