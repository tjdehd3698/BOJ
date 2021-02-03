#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

priority_queue<int, vector<int>, less<int>> maxHeap;
priority_queue<int, vector<int>, greater<int>> minHeap;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int data;
        cin>>data;

        if(maxHeap.size()==minHeap.size()){
            maxHeap.push(data);
        }
        else{
            minHeap.push(data);
        }

        if (!maxHeap.empty() && !minHeap.empty() && maxHeap.top() > minHeap.top())
        {
            int x = maxHeap.top();
            int y = minHeap.top();
 
            maxHeap.pop();
            minHeap.pop();
 
            maxHeap.push(y);
            minHeap.push(x);
        }

        cout<<maxHeap.top()<<"\n";
    }


    return 0;
}