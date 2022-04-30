#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int Queue[MAX];
int Queue2[MAX];
int A[MAX];
bool B[MAX];
bool is_full(int *rear){
    if(*rear>= MAX-1){
        return true;
    }
    return false;
}
void addQ(int *front, int*rear, int value){
    if(is_full(rear)){
        cout<<"Queue is full";
    }else{
        Queue[++*rear]=value;
    }
}
void addQ2(int *front, int*rear, int value){
    if(is_full(rear)){
        cout<<"Queue is full";
    }else{
        Queue2[++*rear]=value;
    }
}
void Display(int *front, int*rear){
    for(int i=*front+1; i<=*rear; i++){
        cout<<Queue2[i]<<" ";
    }
    
}
void CountCV(int *front, int *rear, int n){
    for(int i=1; i<=n; i++){
        A[i]=0;
    }
    for(int i=*front+1; i<=*rear; i+=2){
        int a= Queue[i];
        int b= Queue[i+1];
        if(B[a]==true){
            A[b]++;
        }
    }
}
void CheckQ2(int n, int *front2, int *rear2){
    for(int i=1; i<=n; i++){
        if(B[i]==true&&A[i]==0){
            addQ2(front2, rear2, i);
            B[i]=false;
        }
    }
}
bool CheckB(int n){
    for(int i=1; i<=n; i++){
        if(B[i]==true)
        return false;
    }
    return true;
}

int main(){
    
    int front=-1; int rear = -1;
    int front2=-1; int rear2 = -1;
    int value1,value2;
    int n;
    cout<<"nhap n ";
    cin>>n;
    for(int i =1; i<=n; i++){
        B[i]=true;
    }
    cout<<"nhap vao cap i,j "<<endl;
    for(int i=0; i<n; i++){
        cin>>value1>>value2;
        addQ(&front, &rear, value1);
        addQ(&front, &rear, value2);
    }
    while(CheckB(n)!=true){
        CountCV(&front, &rear, n);
        CheckQ2(n, &front2, &rear2);
    }
    Display(&front2, &rear2);
}