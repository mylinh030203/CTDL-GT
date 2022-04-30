#include<bits/stdc++.h>
using namespace std ;
#define MAX 100
struct element{
    int data;
};
element Queue[MAX];

bool is_Empty(int *front,int *rear){
    return (*front==*rear) ;
}
bool is_full(int *rear){
    return(*rear==MAX-1);
}
void add (int *front, int *rear, element item){
    if(is_full(rear) == true){
        cout<<"queue is full";
    }else{
       
        Queue[++*rear]=item;
    }
}
element Remove(int *front,int *rear){
    element item;
    if(is_Empty(front, rear)==true){
        cout<<"queue is empty";
    }else{
        item=Queue[++*front];
        return item;
    }
}
void Display(int *front, int*rear){
    for(int i=*front+1; i<=*rear; i++){
        cout<<Queue[i].data<<" ";
    }
    
}
int main(){
    int front,rear;
    element item;
    cin>>item.data;
    front=rear=-1;
    add(&front,&rear,item);
    cin>>item.data;
    add(&front,&rear,item);
    cin>>item.data;
    add(&front,&rear,item);
    Display(&front,&rear);
    Remove(&front,&rear);
    Display(&front,&rear);
}