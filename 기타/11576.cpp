#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int a, b;
	int count;
	int num[25]; 

	cin>>a>>b;
	cin>>count;

	for(int i = 0; i < count; i++) cin>>num[i];

	// a진수 -> 10진수
	int dec = 0; 
	for(int i = 0; i < count; i++) dec = dec * a + num[i];

	// 10진수 -> b진수
	vector<int> vec;
	while(dec != 0){
		vec.push_back(dec % b);
		dec = dec / b;
	}

	for(int i = vec.size() - 1; i >= 0; i--){
		cout<<vec[i]<<" ";
	}
    cout<<"\n";
}