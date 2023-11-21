/*
int IsSquare( int n )
{
    int a=sqrt(n);
    double b=sqrt(n);
    if(a==b) return 1;
    else return 0;
}*/
/*
void sort( int a[], int n )
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
}*/
/*
double P( int n, double x )
{
    double d;
    if(n>1)
    {
        d=((2*n-1)*P(n-1,x)-(n-1)*P(n-2,x))/n;
        return d;
    }
    else if(n==1) return x;
    else return 1;
}*/
/*
int MonthDays(int year, int month)
{
    int a[12]={31,0,31,30,31,30,31,31,30,31,30,31};
    if(year%400==0||(year%4==0&&year%100!=0)) a[1]=29;
    else a[1]=28;
    return a[month-1];
}*/
/*
double fact( int n )
{
    if(n!=1) return n*fact(n-1);
    return n;
}*/
/*
#include<stdio.h>
#include<math.h>
int main(){
	int i,j,num;
	double pi=3.1415926535,r,h;
	while(1){
		printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
		scanf("%d",&num);
		switch(num){
			case 1:{
				printf("Please enter the radius:\n");
				scanf("%lf",&r);
				printf("%.2lf\n",4.0/3*pi*pow(r,3));
				break;
			}
			case 2:{
				printf("Please enter the radius and the height:\n");
				scanf("%lf %lf",&r,&h);
				printf("%.2lf\n",pi*pow(r,2)*h);
				break;
			}
			case 3:{
				printf("Please enter the radius and the height:\n");
				scanf("%lf %lf",&r,&h);
				printf("%.2lf\n",1.0/3*pi*pow(r,2)*h);
				break;
			}
			default:return 0;
		}
	}
	return 0;
}*/
/*
#include<stdio.h>
#include<math.h>
int su(int a)
{
    int i,s=-1;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0) s=1;
    }
    return s;
}
int main()
{
    int a,b,i,A[10],x=0,sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i>1;i--)
    {
        if(su(i)==-1)
        {
            A[x]=i;
            sum+=i;
            x++;
        }
        if(x==b) break;
    }
    for(i=0;i<x;i++)
    {
        if(i!=x-1) printf("%d+",A[i]);
        else printf("%d=%d",A[i],sum);
    }
    return 0;
}*/







