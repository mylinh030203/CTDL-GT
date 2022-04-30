#include <bits/stdc++.h>
using namespace std;
void A(double a, double b){
    cout<<"tong 2 so thuc la"<<a+b<<endl;
    cout<<"hieu 2 so thuc la"<<a-b<<endl;
    cout<<"tich 2 so thuc la"<<a*b<<endl;
    if(a==0||b==0){
       cout<<"khong xac dinh";
    }else{
        cout<<"thuong 2 so thuc la "<<a/b<<endl;
    }
}
void B(double a, double b, double *tong, double *hieu, double *tich, double *thuong){
    *tong =a+b;
    *hieu =a-b;
    *tich =a*b;
    if(a==0||b==0) {
        cout<<"khong xac dinh";
    }else{
        *thuong=a/b;
    }
    

}
int main(){
    double a, b;
    double tong, hieu, tich, thuong;
    cout<< "nhap vao 2 so a va b";
    cin>>a>>b;
    A(a,b);
    B(a,b,&tong, &hieu, &tich,&thuong);
    cout<<"tong 2 so thuc la"<<tong<<endl;
    cout<<"hieu 2 so thuc la"<<hieu<<endl;
    cout<<"tich 2 so thuc la"<<tich<<endl;
    cout<<"thuong 2 so thuc la "<<thuong<<endl;
    system("pause");
}