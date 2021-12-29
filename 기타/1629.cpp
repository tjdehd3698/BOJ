#include<iostream>
#include<cmath>
using namespace std;

int a,b,c;

long long calculate(int m, int j){
    if(j==0)return 1;
    else if(j ==1)return m;
    else{ 
        long long tmp = calculate(m,j/2);
        tmp = tmp * tmp % c;

        if(j%2==0)  
            return tmp;
        else    
            return (tmp*m)%c;
    }
}

int main(){
    cin>>a>>b>>c;

    cout<<calculate(a,b)%c<<"\n";
    return 0;
}