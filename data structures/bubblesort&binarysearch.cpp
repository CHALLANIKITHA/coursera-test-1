#include<iostream>
#include<algorithm>
using namespace std;

int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a,b;
    
}

void bubblesort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=1;j<n-i-1;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
            else{
                break;
            }
        }
    }

}
int binarysearch(int a[],int l,int r,int key){
    int n,mid;
    if(l<=r){
        mid=l+((r-l)/2);
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            return binarysearch(a,l,mid-1,key);
        }
        else{
            return binarysearch(a,mid+1,r,key);
        }
    }
    return -1;

}
int main(){
    int n,key,i,a[n],result;
    using namespace std;
    cout<<"enter the length of array:";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the key";
    cin>>key;
    bubblesort(a,n);
    result=binarysearch(a,0,n,key);
    if(result==-1){
        cout<<"element is not present in array";
    }
    else{
        cout<<"element is present at index:"<<result;
    }
    return 0;
}