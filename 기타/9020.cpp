#include <iostream>
#include <cmath>
using namespace std;

bool primeNum(int num){
    int i = 2,root;
    root = sqrt(num);

    if(root == 1)
        return true;

    if(num%2){
        for(;i<=root;i++){
        if(!(num%i))
            return false;   

        if(i == root)
        return true;
        }
    }
    return false;
}

int main(){
    int t,i;
    cin>>t;

    for(;i++<t;){
        int n, a, b, half;
        cin>>n;
        half = n/2;
        for(int j=half; j>=2; j--){
        a = j;
        b = n-a;
        if(primeNum(a) && primeNum(b)){
            cout<<a<<" "<<b<<'\n';       
            break;
        } 
        }
    }  
}