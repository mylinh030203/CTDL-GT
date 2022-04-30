#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"nhap so phan tu mang"<<endl;
    cin>>n;
    int *a= new int[n];
    cout<<"nhap "<<n<<" phan tu"<<endl;
    for(int i=0; i<n; i++){
        *(a+i) = rand();
    }
    cout<<"in ra mang"<<endl;
    for(int i=0; i<n; i++){
        cout<<*(a+i)<<endl;
    }
}