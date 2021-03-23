#include<iostream>
using namespace std;

int a[500000];  //원본배열
int b[500000];  //정렬된 배열
int n;
long long result;

void merge(int left, int right)
{
    int mid = (left + right) / 2;
 
    int i = left;
    int j = mid + 1;
    int k = 0;
 
    while (i <= mid && j <= right)
    {
        if (a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            result += j - (left + k);
            b[k++] = a[j++];
        }
    }

    while (i <= mid) {
		b[k++] = a[i++];
	}
	while (j <= right) { 
		b[k++] = a[j++];
	}
 
    for (int i = left; i <= right; i++) {
        a[i] = b[i - left];
    }
}

void divide(int left, int right) { 
	if (left == right)
		return;
        
	int mid = (left + right) / 2;
	divide(left, mid);
	divide(mid + 1, right);
	merge(left, right);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin>>n;

    for(int i=0;i<n;i++)cin>>a[i];

    divide(0,n-1);

    cout<<result<<"\n";

    return 0;
}