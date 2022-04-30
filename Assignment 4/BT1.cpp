#include <bits/stdc++.h>
using namespace std;
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
typedef struct stack2 *stack_pointer2;
struct stack2
{
    double num;
    stack_pointer2 link;
};
typedef struct node *pnode;
struct node
{
    element num; // dữ liệu chứa trong 1 cái node
    pnode next;  // con trỏ liên kết giữ các cái node vs nhau
};
pnode createNode(element value)
{
    pnode temp;
    temp = new node;
    temp->next = NULL;
    temp->num = value;
    return temp;
}
pnode addhead(pnode head, element value)
{
    if (head == NULL)
    {
        head = createNode(value);
        return head;
    }
    pnode temp = createNode(value);
    temp->next = head;
    head = temp;
    return head;
}

pnode insertlast(pnode head, element value)
{
    if (head == NULL)
    {
        head = createNode(value);
        return head;
    }
    pnode temp, p;
    p = head;
    temp = createNode(value);
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = temp;
    return head;
}
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
void push2(stack_pointer2 *top, double item)
{
    stack_pointer2 temp = new stack2;
    temp->num = item;
    temp->link = *top;
    *top = temp;
}
double pop2(stack_pointer2 *top)
{
    stack_pointer2 temp = *top;
    double item;
    item = temp->num;
    *top = temp->link;
    delete (temp);
    return item;
}
int check2(char ch)
{
    if (ch == 'a')
    {
        return 3;
    }
    if (ch == 'b')
    {
        return 5;
    }
}
bool is_Empty(stack_pointer top)
{
    if (top == NULL)
    {
        return true;
    }
    return false;
}
int check(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    if (ch == '*' || ch == '/')
    {
        return 2;
    }
    if (ch == '(' || ch == ')')
        return 0;
}

pnode HT(string s)
{
    stack_pointer top = NULL;
    pnode head = NULL;
    element item;

    for (int i = 0; i < s.length(); i++)
    {
        item.data = s[i];
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            head = insertlast(head, item);
        }
        else if (s[i] == '(')
        {
            push(&top, item);
            // cout<<pop(&top).data;
        }
        else if (s[i] == ')')
        {
            while (true)
            {
                item = pop(&top);
                if (item.data == '(')
                {
                    break;
                }
                else
                {
                    head = insertlast(head, item);
                }
            }
        }
        else
        {
            if (is_Empty(top) == true)
            {
                item.data = s[i];
                push(&top, item);
            }
            else if (check(top->item.data) >= check(s[i]))
            {
                item = pop(&top);
                head = insertlast(head, item);
                item.data = s[i];
                push(&top, item);
            }
            else
            {

                push(&top, item);
            }
        }
    }
    while (top != NULL)
    {
        head = insertlast(head, pop(&top));
    }
    return head;
}
pnode TT(string s)
{
    string p = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        p = p + s[i];
    }
    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == '(')
        {
            p[i] = ')';
        }
        else if (p[i] == ')')
        {
            p[i] = '(';
        }
    }
    s = p;
    pnode head = HT(s);
    stack_pointer topTT = NULL;
    while (head != NULL)
    {
        push(&topTT, head->num);
        head = head->next;
    }
    head = NULL;
    while (is_Empty(topTT) == false)
    {
        head = insertlast(head, pop(&topTT));
    }
    return head;
}
double TinhToan(pnode head)
{
    stack_pointer2 top2 = NULL;
    while (head != NULL)
    {
        char ch = head->num.data;
        if (ch == 'a' || ch == 'b')
        {
            push2(&top2, check2(ch));
        }
        else
        {
            double a = pop2(&top2);
            double b = pop2(&top2);
            switch (ch)
            {
            case '+':
                push2(&top2, a + b);
                break;
            case '-':
                push2(&top2, a - b);
                break;
            case '*':
                push2(&top2, a * b);
                break;
            case '/':
                push2(&top2, a / b);
                break;
            }
        }
        head=head->next;
    }
    return pop2(&top2);
}
void display(pnode head)
{
    pnode p = head;
    while (p != NULL)
    {
        cout << p->num.data << " ";
        p = p->next;
    }
    cout << endl;
}
int main()
{
    pnode head = NULL;
    string s;
    getline(cin, s);
    head = HT(s);
    display(head);

    head = TT(s);
    display(head);
    head = HT(s);
    cout<<TinhToan(head);
}