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
int x;
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
cout<<"enter data:";
cin>>x;
if(x==-1){
    return 0;
}
newnode->data=x;
cout<<"enter the left:";
cin>>left;
newnode->left=create();
cout<<"enter right:";
cin>>right;
newnode->right=create();
return newnode;
}
int max(int a,int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}
int treeheight(node*root){
    if(root==NULL){
        return 0;
    }
    else
    {
        return max(treeheight(root->left),treeheight(root->right));
    }
    
}
int main(){
    struct node*root;
    root=create();
    cout<<"height of tree:"<<treeheight(root);
    return 0;

}
