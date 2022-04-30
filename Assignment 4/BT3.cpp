#include <bits/stdc++.h>
using namespace std;
// typedef node* pnode;
// struct node{
//     char data;
//     pnode next;
// };
typedef struct
{
    char data;
} element;

typedef struct stack1 *stack_pointer;

struct stack1
{
    element item;
    stack_pointer link;
};

// pnode createNode(char s){
//     pnode temp;
//     temp = new node;
//     temp->next = NULL;
//     temp->data = s;
//     return temp;
// }
// pnode insertLast(pnode head, char s){
//     if(head == NULL){
//         head = createNode(s);
//         return head;
//     }
//     pnode temp, p=head;
//     temp = createNode(s);
//     while(p->next!=NULL){
//         p=p->next;
//     }
//     p->next = temp;s
//     return head;s

// }
void push(stack_pointer *top, element item)
{
    stack_pointer temp = new stack1;
    temp->item = item;
    temp->link = *top;
    *top = temp;
}
element pop(stack_pointer *top)
{
    stack_pointer temp = *top;
    element item;
    item = temp->item;
    *top = temp->link;
    delete (temp);
    return item;
}
bool is_Empty(stack_pointer top){
    if(top==NULL){
        return true;
    }
    return false;
}

int main()
{
    stack_pointer top = NULL;
    element item;
    string s;
    getline(cin,s);
    for(int i=0 ; i<s.length(); i++){
        item.data = s[i];
        push(&top, item);
    }
    while(is_Empty(top)==false){
        cout<<pop(&top).data;
    }
    
}