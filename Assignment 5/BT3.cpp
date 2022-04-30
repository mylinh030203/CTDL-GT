#include <bits/stdc++.h>
using namespace std;
struct element{
    int data;
};
typedef struct Stack1 *stack_pointer;
struct Stack1{
    element data;
    stack_pointer link;
};
#define MAX 1000
element Queue[MAX];
bool is_Empty(int *front,int *rear){
    return (*front==*rear) ;
}
bool is_EmptyS(stack_pointer top){
    if(top==NULL){
        return true;
    }
    return false;
}
bool is_full(int *rear){
    return(*rear==MAX-1);
}
void addQ(int *front, int *rear, element item){
    if(is_full(rear)==true) 
        cout<<"Queue is full";
    else
        Queue[++*rear]=item;
}
void push(stack_pointer *top, element item)
{
    stack_pointer temp = new Stack1;
    temp->data = item;
    temp->link = *top;
    *top = temp;
}
stack_pointer copyQueue(int *front, int *rear){
    stack_pointer top =NULL;
    for(int i=(*front)+1; i<=*rear; i++){
        push(&top, Queue[i]);
    }
    return top;
}
element Pop(stack_pointer *top){
    element item;
    stack_pointer temp;
    temp = *top;
    item = temp->data;
    *top = temp->link;
    return item;
}
void PrintStack(stack_pointer top){
    while(is_EmptyS(top)==false){
        cout<<Pop(&top).data<<" ";
    }
}

int main(){
    int front, rear;
    element item;
    stack_pointer top;
    cin>>item.data;
    front=rear=-1;
    addQ(&front,&rear,item);
    cin>>item.data;
    addQ(&front,&rear,item);
    cin>>item.data;
    addQ(&front,&rear,item);
    top = copyQueue(&front, &rear);
    PrintStack(top);
}