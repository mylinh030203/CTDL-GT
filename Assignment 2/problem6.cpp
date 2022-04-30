#include<bits/stdc++.h>
using namespace std;
long long P(int a[],int n,int x){
    long long sum=0;
    long long b=1;
    for(int i=0; i<=n; i++){
        sum = sum+(a[i]*b);
        b=b*x;
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