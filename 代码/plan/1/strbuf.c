#include<stdio.h>
#include<string.h>
struct strbuf
{
    int len;     //当前缓冲区（字符串）长度
    int alloc;   //当前缓冲区（字符串）容量
    char *buf;   //缓冲区（字符串）
};
void strbuf_init(struct strbuf *sb, size_t alloc);//
void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc);//
void strbuf_release(struct strbuf *sb);//
void strbuf_swap(struct strbuf *a, struct strbuf *b);//
char *strbuf_detach(struct strbuf *sb, size_t *sz);
int main()
{
    struct strbuf sb;
    strbuf_init(&sb, 10);
    strbuf_attach(&sb, "xiyou", 5, 10);
    assert(strcmp(sb.buf, "xiyou") == 0);
    strbuf_addstr(&sb, "linux");
    assert(strcmp(sb.buf, "xiyoulinux") == 0);
    strbuf_release(&sb);
}
void strbuf_init(struct strbuf *sb, size_t alloc)
{
    sb=malloc(sizeof(int)*2+sizeof(char)*alloc);
    sb->alloc=alloc;
}
void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc)
{
    strcpy(sb->buf,str);
    sb->len=len;
    sb->alloc=alloc;
}
void strbuf_release(struct strbuf *sb)
{
    free(sb);
}
void strbuf_swap(struct strbuf *a, struct strbuf *b)
{
    struct strbuf swap=*a;
    *a=*b;
    *b=swap;
}
char *strbuf_detach(struct strbuf *sb, size_t *sz)
{
    
}