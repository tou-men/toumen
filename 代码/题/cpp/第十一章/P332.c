#include<stdio.h>
int main()
{
    char words[14];
    puts("Enter a string, please.");
    fgets(words,14,stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words,stdout);
    puts("Enter another string, please.");
    fgets(words,14,stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words,stdout);
    puts("Done.");
    return 0;
}