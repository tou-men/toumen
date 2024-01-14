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