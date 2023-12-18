#include<stdio.h>
#include<stdlib.h>
void my_word();
int main()
{
    printf("How many words?\n");
    int n;
    scanf("%d",&n);
    my_word(n);
    return 0;
}
void my_word(int n)
{
    printf("How many words?\n");
    int i;
    char (*p)[n]=malloc(n*10*sizeof(char));
    for(i=0;i<n;i++) scanf("%s",p[i]);
    printf("Here are your words\n");
    for(i=0;i<n;i++) printf("%s\n",p[i]);
    free(p);
}//统计单词