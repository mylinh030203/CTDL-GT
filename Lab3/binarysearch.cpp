#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int x){
    int L=0;
    int R=n-1;
    int M=(L+R)/2;
    while(L<=R){
        M=(L+R)/2;
        if(x>arr[M]){
            L=M+1;
        }
        if(x<arr[M]){
            R=M-1;
        }
        if(x==arr[M]){
            return M;
        }
    }
    return -1;
}

int binarySearchLeft(int arr[], int n, int x){
    int L=0;
    int R=n-1;
    int M=(L+R)/2;
    while(L<R){
        M=(L+R)/2;
        if(x>arr[M]){
            L=M+1;
        }
        else{
            R=M;
        }
        
    }
    if(arr[R]==x){
        return R;
    }
    return -1;
}

int binarySearchRight(int arr[], int n, int x){
    int L=0;
    int R=n-1;
    int M=(L+R)/2;
    while(L<R){
        
        M=(L+R+1)/2;
        
        if(x>=arr[M]){
            L=M;
        }
        else{
            R=M-1;
        }
        
        
    }
    if(arr[R]==x){
        return R;
    }
    return -1;
}
int main(){
    int n, x;
    cin>>n>>x;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<binarySearchRight(arr, n,x);
    
}