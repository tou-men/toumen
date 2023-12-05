#include"strbuf.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// struct strbuf
// {
//     int len;     //当前缓冲区（字符串）长度
//     int alloc;   //当前缓冲区（字符串）容量
//     char *buf;   //缓冲区（字符串）
// };
// int main()
// {
//     struct strbuf sb;
//     strbuf_init(&sb, 10);
//     strbuf_attach(&sb, "xiyou", 5, 10);
//     assert(strcmp(sb.buf, "xiyou") == 0);
//     strbuf_addstr(&sb, "linux");
//     assert(strcmp(sb.buf, "xiyoulinux") == 0);
//     strbuf_release(&sb);
// }
void strbuf_init(struct strbuf *sb, size_t alloc)
{
    sb->buf=(char *)malloc(sizeof(char)*alloc);
    sb->alloc=alloc;
}
void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc)
{
    strcpy(sb->buf,(char*)str);
    sb->len=len;
    sb->alloc=alloc;
}
void strbuf_release(struct strbuf *sb)
{
    free(sb->buf);
}
void strbuf_swap(struct strbuf *a, struct strbuf *b)
{
    struct strbuf swap=*a;
    *a=*b;
    *b=swap;
}
char *strbuf_detach(struct strbuf *sb, size_t *sz)
{
    struct strbuf *re;
    *re=*sb;
    *sz=sb->alloc;
    free(sb->buf);
    return re->buf;
}
int strbuf_cmp(const struct strbuf *first, const struct strbuf *second)
{
    if(first->alloc==second->alloc) return 1;
    else return 0;
}
void strbuf_reset(struct strbuf *sb)
{
    for(int i=0;i<sb->len;i++) sb->buf[i]='\0';
}
void strbuf_grow(struct strbuf *sb, size_t extra)
{
    int n=sb->alloc-sb->len;
    if(n<extra)
    {
        sb->buf=(char *)realloc(sb->buf,(sb->len+extra)*sizeof(char));
        sb->alloc=sb->len+extra;
    }
}
void strbuf_add(struct strbuf *sb, const void *data, size_t len)
{
    strbuf_grow(sb,len+1);
    memcpy(sb->buf+sb->len,data,len);
    sb->buf[sb->len+len]='\0';
    sb->len+=len;
}
void strbuf_addch(struct strbuf *sb, int c)
{
    strbuf_add(sb,&c,1);
}
void strbuf_addstr(struct strbuf *sb, const char *s)
{
    strbuf_grow(sb,strlen(s));
    strcat(sb->buf,s);
    sb->alloc+=strlen(s);
    sb->len+=strlen(s);
}
void strbuf_addbuf(struct strbuf *sb, const struct strbuf *sb2)
{
    sb->alloc+=sb2->alloc;
    sb->len+=sb2->len;
    strcat(sb->buf,sb2->buf);
}
void strbuf_setlen(struct strbuf *sb, size_t len)
{
    if(len>sb->len)
    {
        sb->buf=(char*)realloc(sb->buf,len);
        sb->alloc=len;
        sb->len=len;
    } else
        {
            sb->len=len;
            sb->buf[len]='\0';
        }
}
size_t strbuf_avail(const struct strbuf *sb)
{
    return sb->alloc-sb->len-1;
}
void strbuf_insert(struct strbuf *sb, size_t pos, const void *data, size_t len)
{
    strbuf_grow(sb,sb->alloc-pos+len);
    sb->buf=(char *)realloc(sb->buf,(len)*sizeof(char));
    memcpy(sb->buf+pos,data,len);
    sb->len+=len;
}
void strbuf_ltrim(struct strbuf *sb)
{
    for(int i=0;i<sb->len;i++)
    {
        if(sb->buf[i]=='\t'||sb->buf[i]==' ')
        {
            sb->buf[i]='\0';
            sb->len--;
        }
    }
}
void strbuf_rtrim(struct strbuf *sb)
{
    
}