#include<bits/stdc++.h>
using namespace std;
#define IS_EMPTY(ptr) (!(ptr));
#define IS_FULL(ptr) (!(ptr));
struct element{
    int data;
};
typedef struct Queue *queue_pointer;
struct Queue
{
    element item;
    queue_pointer link;
};
void addQ(queue_pointer *front, queue_pointer *rear, element item){
    queue_pointer temp = new Queue;
    
    temp->item = item;
    temp->link = NULL;
    if(*front!=NULL){
        (*rear)->link=temp;
    }else{
        *front = temp;
    }
        *rear = temp;
    
}
element DeleteQ(queue_pointer *front){
    queue_pointer temp =*front;
    element item;
    // if(*front ==NULL&& *rear==NULL){
    //     cout<<"The Queue is Empty";
    // }
    
    item = temp->item;
    cout<<item.data;
    *front = temp->link;
    delete(temp);
    return item;
    
    
}
void Display(queue_pointer *front, queue_pointer *rear){
    queue_pointer temp = *front;
    while(temp != *rear){
        cout<<(temp)->item.data<<" ";
        (temp)=(temp)->link;
    }
    cout<<(temp)->item.data<<" ";
}
int main(){
    queue_pointer front=NULL, rear = NULL;
    element item;
    cin>>item.data;
    addQ(&front, &rear, item);
    cin>>item.data;
    addQ(&front, &rear, item);
    cin>>item.data;
    addQ(&front, &rear, item);
    cin>>item.data;
    addQ(&front, &rear, item);
    cin>>item.data;
    addQ(&front, &rear, item);
    Display(&front, &rear);
    cout<<endl;
    Display(&front, &rear);
   
        
    
}
