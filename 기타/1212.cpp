#include<iostream>
#include<string>
using namespace std;

int main(){
    string n;
    cin>>n;

    if(n[0]-'0'==0) {
		cout<<'0'; 
		return 0;
	}

    for(int i=0;i<n.size();i++){
        int tmp[3]={0,};
        int num=n[i]-'0';
        int j=2;
        while(num>0){
            tmp[j--]=num%2;
            num/=2;
        }
        if(i==0) {
			for(int k=j+1; k<3; k++)
				cout<<tmp[k];
		} else
			cout<<tmp[0]<<tmp[1]<<tmp[2];
    }
    cout<<"\n";
    return 0;
}