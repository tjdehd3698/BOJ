#include<iostream>
using namespace std;

char tree[26][2];

void preorder(char root){
    if(root=='.')return;
    cout<<root;
    preorder(tree[root-'A'][0]);
    preorder(tree[root-'A'][1]);
}

void inorder(char root){
    if(root=='.')return;
    inorder(tree[root-'A'][0]);
    cout<<root;
    inorder(tree[root-'A'][1]);
}

void postorder(char root){
    if(root=='.')return;
    postorder(tree[root-'A'][0]);
    postorder(tree[root-'A'][1]);
    cout<<root;
}

int main(){ 
    int num;
    cin>>num;
    char root,left,right;

    for(int i=1;i<=num;i++){
        cin>>root>>left>>right;
        tree[root-'A'][0] = left;
        tree[root-'A'][1] = right;
    }

    preorder('A');
    cout<<"\n";
    inorder('A');
    cout<<"\n";
    postorder('A');
    cout<<"\n";

    return 0;
}