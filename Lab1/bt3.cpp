#include<bits/stdc++.h>
using namespace std;

int GDC(int a,int b){
    if(b==0) return a;
    if(a%b==0) return b;
    return GDC(b, a%b);
}
int LMC(int a, int b){
    return(a*b/(GDC(a,b)));
}
int main(){
    int a,b;
    cout<<"nhap vao 2 so";
    cin>>a>>b;
    cout<<GDC(a,b)<<endl;
    cout<<LMC(a,b);
    
}