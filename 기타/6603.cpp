#include<iostream>
using namespace std;

const int MAX = 6;

int k;
int nums[MAX]={0,};
int arr[13]={0,};

void cal(int sequence, int idx){
    if(idx == MAX){
        for(int i=0;i<MAX;i++){
            cout<<nums[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    else{
        for(int i=sequence;i<k;i++){
            nums[idx]=arr[i];
            cal(i+1, idx+1); 
        }
    }
}


int main(){
    while(1){
        cin>>k;
        if(k==0) break;
        
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }

        cal(0,0);
        cout<<"\n";
    }

    return 0;
}