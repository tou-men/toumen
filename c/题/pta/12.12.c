/*
void Shift( char s[] )
{
    int len=strlen(s);
    char ch;
    for(int i=0;i<3;i++)
    {
        ch=s[0];
        for(int j=1;j<len;j++)
        {
            s[j-1]=s[j];
        }
        s[len-1]=ch;
    }
}*/
/*
void splitfloat( float x, int *intpart, float *fracpart )
{
    *intpart=(int)x;
    *fracpart=x-*intpart;
}*/
/*
int search( int list[], int n, int x )
{
    int i,flag=1,N;
    for(i=0;i<n;i++)
    {
        if(list[i]==x)
        {
            flag=-1;
            N=i;
            break;
        }
    }
    if(flag==1) return -1;
    if(flag==-1) return N;
}*/
/*
void strmcpy( char *t, int m, char *s )
{
    for(t+=m-1;*t!='\0';t++)
    {
        *s=*t;
        s++;
    }
    *s='\0';
}*/
/*
bool palindrome( char *s )
{
    int len=strlen(s);
    int count=0;
    char *a=strlen(s)-1+s;
    if(len%2==0)
    {
        for(int i=0;i<len/2;i++)
        {
            if(*s==*a)
            {
                count++;
            }
            s++;
            a--;
        }
        if(count==len/2) return 1;
        else return 0;
    } else 
    {
        for(int i=0;i<len/2;i++)
        {
            if(*s==*a) count++;
            s++;
            a--;
        }
        if(count==len/2) return 1;
        else return 0;
    }
}*/
/*
int getindex( char *s )
{
    if(strncmp(s,"Sunday",strlen(s))==0) return 0;
    else if(strncmp(s,"Monday",strlen(s))==0) return 1;
    else if(strncmp(s,"Tuesday",strlen(s))==0) return 2;
    else if(strncmp(s,"Wednesday",strlen(s))==0) return 3;
    else if(strncmp(s,"Thursday",strlen(s))==0) return 4;
    else if(strncmp(s,"Friday",strlen(s))==0) return 5;
    else if(strncmp(s,"Saturday",strlen(s))==0) return 6;
    else return -1;
}*/
/*
int max_len( char *s[], int n )
{
    int max=strlen(s[0]);
    for(int i=1;i<n;i++)
    {
        if(max<strlen(s[i])) max=strlen(s[i]);
    }
    return max;
}*/