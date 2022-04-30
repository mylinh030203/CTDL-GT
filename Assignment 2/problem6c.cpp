#include<bits/stdc++.h>
using namespace std;
long long P(int a[],int n,int x){
    long long sum=0;
    for(int i=n; i>=0; i--){
        sum = sum*x+a[i];
    }
    return sum;
}
int main(){
    int a[10000];
    int n,x;
    cin>>n;
    cin>>x;
    for(int i=0; i<=n; i++){
        cin>>a[i];
    }
    cout<<P(a,n,x);
}