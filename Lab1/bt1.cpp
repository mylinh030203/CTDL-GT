#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[10000];
    int brr[10000];
    cout<<"nhap so phan tu mang";
    cin>>n;
   
    for(int i=0; i<n; i++){
        int  seed = rand();
      *(arr+i) = seed;
    }
   for(int i=0; i<n; i++){
        cout<<*(arr+i)<<endl;
    }
    


   /* int index=0;
    for(int i=0; i<n; i++){
        if(*(arr+i)%2==0){
            *(brr+index)=*(arr+i);
            index++;
        }
    }
    for(int i=0; i<index; i++){
        cout<<*(brr+i)<<" ";
    }*/
    int index=0;
    for(int i=0; i<n; i++){
        if(*(arr+i)%2==0){
            *(arr+index)=*(arr+i);
            index++;
        }
    }
    cout<<"mang sau khi xoa"<<endl;
    for(int i=0; i<index; i++){
        cout<<*(arr+i)<<" ";
    }

}