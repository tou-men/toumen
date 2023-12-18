#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *getNewNode(int val)
{
    Node *p=(Node*)malloc(sizeof(Node));
    p->data=val;
    p->next=NULL;
    return p;
}
void clear(Node *head)
{
    if(head==NULL) return ;
    for(Node *p=head,*q;p;p=q)
    {
        q=p->next;
        free(p);
    }
    return ;
}
Node *insert(Node *head,int pos,int val)
{
    if(pos==0)
    {
        Node *p=getNewNode(val);
        p->next=head;
        return p;
    }
    Node *p=head;
    for(int i=1;i<pos;i++) p=p->next;//--p--node--p->next--pos--
    Node *node=getNewNode(val);
    node->next=p->next;
    p->next=node;
    return head;
}
void output_linklist(Node *head)
{
    int len=0;
    for(Node *p=head;p/*->next!=NULL*/;p=p->next)
    {
        len++;
        if(p->next==NULL) printf("%d\nlen = %d\n",p->data,len);
        else printf("%d->",p->data);
    }
}
int main()
{
    srand(time(NULL));
    Node *head=NULL;
    for(int i=0;i<20;i++)
    {
        int pos=rand()%(i+1),val=rand()%100;
        printf("insert %d at %d to linklist\n",val,pos);
        head=insert(head,pos,val);
    }
    output_linklist(head);
    clear(head);
}