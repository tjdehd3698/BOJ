#include<iostream>
#include<algorithm>
using namespace std;


int sour[11];
int bit[11];
int n;

long long cal(long long s, long long b, int posi){
    if(posi == n){
        if(b == 0) return 9999999999;
        return abs(s-b);
    }
    else 
        return min(cal(s*sour[posi+1],b+bit[posi+1],posi+1),cal(s,b,posi+1));
}


int main(){
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>sour[i]>>bit[i];
    }

    cout<<cal(1,0,0)<<"\n";

    return 0;
}