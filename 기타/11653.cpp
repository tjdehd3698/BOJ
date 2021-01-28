#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            n/=i;
            cout<<i<<"\n";
            i--;
        }
    }

    if(n!=1) cout<<n<<"\n";
    return 0;
}