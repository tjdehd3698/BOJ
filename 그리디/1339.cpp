#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

char arr[10][10];
int len[10];
int alpha[26];

int n;
int result = 0;

bool desc(int a, int b){ return a > b; }


int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        len[i] = strlen(arr[i]);
    }

    int tmp;
    for(int i=0; i<n; i++){
        tmp = 1;
        for(int j=len[i]-1; j>=0; j--){
            alpha[arr[i][j]-'A'] += tmp;
            tmp *= 10;
        }
    }
    
    sort(alpha, alpha+26, desc);
    
    for(int i=0; i<10; i++){
        result += alpha[i] * (9-i);
    }
    
    cout<<result<<"\n";

    return 0;
}
