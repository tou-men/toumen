/*
struct complex multiply(struct complex x, struct complex y)
{
    struct complex a;
    a.real=x.real*y.real-x.imag*y.imag;
    a.imag=x.imag*y.real+x.real*y.imag;
    return a;
}*/
/*
int set_grade( struct student *p, int n )  
{  
    int count=0,i;  
    
    for(i=0;i<n;i++)  
    {  
        if((*p).score<60)    
        {  
            (*p).grade='D';  
            count++;  
        }  
        else if((*p).score>=60&&(*p).score<=69)  
        (*p).grade='C';  
        else if((*p).score>=70&&(*p).score<=84)  
        (*p).grade='B';  
        else  
        (*p).grade='A';  
        
		p++; //最后有个p++ 代表从p0 ——> p1......... 
    }  
      
    return count;  return 只能返回一个值 所以 返回count  代表 set_grede 的值  
}                其余的操作通过 *p 来完成 */
/*
struct ListNode *readlist()             // 读取链表
{
    struct ListNode *head,*p1,*p2;      // 定义头结点和两个临时指针变量
    int n=0;                            // 定义节点数量
    head = NULL;                        // 初始化头结点为空指针
    p1 = p2 = (struct ListNode*)malloc(sizeof(struct ListNode));  // 开辟新空间
    scanf("%d",&p1->data);              // 从键盘上读入第一个节点的数据
    while(p1->data!=-1)                 // 如果当前节点不是最后一个节点
    {
        n++;                            // 记录节点个数
        if(n==1)                        // 如果是头节点
            head = p1;                  // 将当前节点作为头结点
        else
            p2->next = p1;              // 将前一个节点指针指向当前节点

        p2 = p1;                        // 将 p1 赋值给 p2，以便在下一次循环中使用
        p1 = (struct ListNode*)malloc(sizeof(struct ListNode));   // 为下一节点开辟新空间
        scanf("%d",&p1->data);          // 读入下一个节点的数据
    }
    p2->next = NULL;                    // 最后一个节点指向 NULL
    return head;                        // 返回头结点指针
}

struct ListNode *deletem( struct ListNode *L, int m )    // 删除指定元素
{
    struct ListNode *p1,*p2;            // 定义两个指针变量
    p1 = L;                             // 将 L（链表的头结点）赋值给 p1
    while(p1!=NULL)                     // 循环遍历链表
    {
        if(p1->data==m)                 // 如果当前节点存储的数据等于待删除的数 m
        {
            if(p1==L)                   // 如果当前节点是头节点
                L = p1->next;           // 将头指针指向当前节点的下一个节点，即删除头节点
            else
                p2->next = p1->next;    // 将前一个节点的指针指向当前节点的下一个节点，即删除中间节点或尾节点
        }
        else
        {
            p2 = p1;                    // 将 p1 赋值给 p2，以便在下一次循环中使用
        }
        p1 = p1->next;                  // 将 p1 指向下一个节点
    }
    return L;                           // 返回操作后的链表
}
*/
/*
void input()
{
    struct stud_node *q;                // 定义临时指针变量 q，用于操作新的节点
    int len=0;                          // 定义链表中节点数（即长度）的计数器，初始值为 0

    q = (struct stud_node*)malloc(sizeof(struct stud_node));    // 在动态内存中分配新的节点空间
    q->next = NULL;                     // 将指针成员变量初始化为 NULL，表示当前节点是末尾节点
    scanf("%d ",&q->num);               // 从键盘上读入学号
    while ( q->num != 0 )               // 如果输入的学号不为 0，说明还有待创建的新节点
    {
        len++;                          // 计数器加 1，表示又成功创建了一个新节点
        scanf("%s %d",q->name,&q->score);   // 从键盘上读入姓名和分数，并存储到链表节点中
        if ( len == 1 )                 // 如果当前是第一个节点，直接将头指针和尾指针都指向该节点
        {
            head = q;
            tail = q;
            tail->next = NULL;          // 将尾指针的 next 成员变量初始化为 NULL，表示当前节点是末尾节点
        }
        else                            // 否则，使用尾插法将新节点插入到链表末尾
        {
            tail->next = q;             // 将尾指针指向的节点的 next 成员变量指向 q，即当前新节点
            tail = q;                   // 尾指针更新为当前节点
            tail->next = NULL;          // 将尾指针的 next 成员变量初始化为 NULL，表示当前节点是末尾节点
        }

        q = (struct stud_node*)malloc(sizeof(struct stud_node));   // 在动态内存中分配新的节点空间
        q->next = NULL;                 // 将指针成员变量初始化为 NULL，表示当前节点是末尾节点
        scanf("%d ",&q->num);           // 读取下一个学号，继续进行链表的创建
    }
}
*/
/*#include<stdio.h>
struct yu
{
    char a[15];
    double b;
    double c;
    double d;
    double e;
};
int main()
{
    int n,i;
    struct yu a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%lf%lf%lf",&a.a,&a.b,&a.c,&a.d);
        a.e=a.c+a.b-a.d;
        printf("%s %.02lf\n",a.a,a.e);
    }
    return 0;
}*/
/*
#include<stdio.h>
struct stu
{
    int a;
    char b[20];
    int c;
};
int main()
{
    struct stu S[15];
    int n,i;
    double sum=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%s%d",&S[i].a,S[i].b,&S[i].c);
        sum+=S[i].c;
    }
    printf("%.2lf\n",sum/n);
    for(i=0;i<n;i++)
    {
        if(S[i].c<sum/n)
        {
            printf("%s %05d\n",S[i].b,S[i].a);
        }
    }
    return 0;
}*/