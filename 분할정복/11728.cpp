#include<iostream>
#include<algorithm>
using namespace std;

int a[1000000];
int b[1000000];
int result[2000000];
int A,B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>A>>B;

    for(int i=0;i<A;i++)
        cin>>a[i];
    for(int i=0;i<B;i++)
        cin>>b[i];


    int anum=0,bnum=0;
    int resultNum=0;
    while(anum<A&&bnum<B){
        if(a[anum]<b[bnum]){
            result[resultNum++] = a[anum++];
        }
        else{
            result[resultNum++] = b[bnum++];
        }
    }

    while(anum<A)result[resultNum++] = a[anum++];
    while(bnum<B)result[resultNum++] = b[bnum++];

    for(int i=0;i<resultNum;i++){
        cout<<result[i]<<" ";
    }
    cout<<"\n";
    return 0;
}