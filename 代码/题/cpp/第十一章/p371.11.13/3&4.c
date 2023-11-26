#include<stdio.h>
#include<stdlib.h>
char *m_word();
int main()
{
    int a;
    scanf("%d\n",&a);
    char *p=m_word(a);
    puts(p);
}
char *m_word(int a)
{
    char *p=malloc(a*sizeof(char));
    scanf("%s",p);
    return p;
}