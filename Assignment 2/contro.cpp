#include<bits/stdc++.h>
using namespace std;
void Linh(int *a){
    *a=*a+10;
}
int main(){
    int b=10;
    Linh(&b);
    cout<<b;

}