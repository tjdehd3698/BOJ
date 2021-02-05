#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int n,m;

int main(){
    cin>>n>>m;

    int result = abs(m-n);

    int cnt=0;
    int tmp=n;

    if(n<m){
        for(int i=0;;i++){
            cnt++;
            tmp*=2;
            cout<<"tmp : "<<tmp<<endl;
            if(tmp>=m)break;
        }

        cout<<result<<endl;
        result= min(result, cnt+tmp-m);
        cout<<result<<endl;
        result= min(result,cnt-1+(m-tmp/2));
        cout<<result<<endl;
    }

    cout<<result<<"\n";

    return 0;
}