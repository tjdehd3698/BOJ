#include<iostream>
using namespace std;

void hanoi(int size,int a,int b,int c){
     if (size == 1)
        cout << a << " " << c << "\n";
    else {
        hanoi(size - 1, a, c, b);
        cout << a << " " << c << "\n";
        hanoi(size - 1, b, a, c);
    }
}

int main(){
    int n;
    cin>>n;

    cout<<(1<<n)-1<<"\n";
    hanoi(n, 1, 2, 3);

    return 0;
}