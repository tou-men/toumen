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
}*///-------------------------------------------------------------------------
/*
int max_len( char *s[], int n )
{
    int i,len=strlen(s[0]);
    for(i=1;i<n;i++)
    {
        if(strlen(s[i])>len) len=strlen(s[i]);
    }
    return len;
}*///------------------------------------------------------------------------------
/*
char *str_cat( char *s, char *t )
{
    return strcat(s,t);
}*///--------------------------------------------------------------------------
/*
char *match( char *s, char ch1, char ch2 )
{
	while(*s!='\0'){        
		if(*s==ch1){        
			for(char *s1=s;*s1!='\0';s1++){
				printf("%c",*s1);
				if(*s1==ch2)break;
			}printf("\n");
			return s;
		}s++;
	}printf("\n");
	return s;
}*///----------------------------------------------------------------------------------
/*
char *search( char *s, char *t )
{
    int i=0,j=0,k;
    for(i=0;s[i]!='\0';i++)
    {
        k=i;
        j=0;
        while(s[k]==t[j]&&s[k]!='\0'&&t[j]!='\0')
        {
            k++;
            j++;
        }
        if(j!=0&&t[j]=='\0')
            break;
    }
    if(s[i]!='\0')
    {
        s=i+s;
        return s;
    }
    return NULL;
}*///------------------------------------------------------------------------------------
/*
#include<stdio.h>
int main()
{
    int N,a;
    int i;
    double sum;
    scanf("%d",&N);
    scanf("%d",&a);
    int min=a;
    int max=a;
    sum=a;
    for(i=1;i<N;i++)
    {
        scanf("%d",&a);
        sum+=(a);
        if(a>max) max=a;
        if(a<min) min=a;
    }
    double x=sum*1.0/N;
    printf("average = %.2lf\nmax = %d.00\nmin = %d.00\n",x,max,min);
    return 0;
}*///-----------------------------------------------------------------------------