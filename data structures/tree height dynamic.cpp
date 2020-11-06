#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

struct node{
    int data;
    node*left;
    node*right;
};
struct node*create(){
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==-1){
    return 0;
}
cout<<"enter data:";
cin>>data;
newnode->data=data;
cout<<"enter the left:";
cin>>left;
newnode-?left=create();
cout<<"enter right:";
cin>>right;
newnode->right=create();
}
int max(int a,int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}
int treeheight(root){
    if(root==NULL){
        return 0;
    }
    else
    {
        return max(treeheight(left),treeheight(right));
    }
    
}
int main(){
    struct node*root;
    root=create();
    cout<<"height of tree:"<<treeheight(root);

}
