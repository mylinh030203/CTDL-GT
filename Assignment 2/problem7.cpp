#include<bits/stdc++.h>
using namespace std;
long long P(int a, int n){
    int ans=1;
    while(n>0){
        if(n%2==0){
            a=a*a;
            n=n/2;
        }else{
            ans=ans*a;
            n=n-1;
        }
    }
    return ans;
}
int main(){
    int a, n;
    cin>>a>>n;
    cout<<P(a,n);
}