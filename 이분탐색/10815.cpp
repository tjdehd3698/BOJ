#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,M;
vector<int> card;
int binarySearch(int key){
    int first=0;
    int last=card.size()-1;
    int middle=(first+last)/2;
    
    while(first<=last){
        if(card[middle]==key)
            return 1;
        
        if(card[middle]>key)
            last=middle-1;
        
        if(card[middle]<key)
            first=middle+1;
        
        middle=(first+last)/2;
        
    }
    
    return 0;
}

int main() {
    
    std::ios_base::sync_with_stdio(false);
    cin>>N;
    
    card=vector<int> (N,0);
    for(int i=0;i<N;i++)
        cin>>card[i];
    
    cin>>M;
    vector<int> vec(M,0);
    for(int i=0;i<M;i++)
        cin>>vec[i];
    
    sort(card.begin(),card.end());
    
    for(int i=0;i<M;i++){
        cout<<binarySearch(vec[i])<<" ";
    }
    
    return 0;
}