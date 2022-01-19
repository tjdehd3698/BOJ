#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector< pair<int, int> > classTime;
priority_queue< int, vector<int>, greater<int> > pq; //작은 것이 우선순위 높게 설정

int greedy(){
    pq.push(classTime[0].second);

    for(int i=1; i<n; ++i){
        pq.push(classTime[i].second);
        if (pq.top() <= classTime[i].first){
            pq.pop();
        }
    }
    return pq.size();
}

int main(){
    cin >> n;

    for(int i=0; i<n; ++i){
        int stime, etime;
        cin >> stime >> etime;
        classTime.push_back({stime, etime});
    }

    sort(classTime.begin(), classTime.end());

    cout << greedy() << endl;

}