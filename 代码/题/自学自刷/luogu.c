/*B2029
#include <stdio.h>
int main()
{
	double h,r,PI=3.14,v,n;
	scanf("%lf%lf",&h,&r);
	v=(r*r*PI*h)/1000;
	n=20/v;
	n++;
	printf("%.0lf",n);
	return 0;
}
P1425
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=c-a;
	f=d-b;
	if(f<0)
	{
		e--;
		f+=60;
	}
	printf("%d %d",e,f);
	return 0;
}
P1421
#include<stdio.h>
int main()
{
	int a,b,c,n;
	scanf("%d%d",&a,&b);
	c=a*10+b;
	n=c/19;
	printf("%d",n);
	return 0;
}
P5708
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,p,s;
	scanf("%lf%lf%lf",&a,&b,&c);
	p=(a+b+c)/2;
	p=p*(p-a)*(p-b)*(p-c);
	s=sqrt(p);
	printf("%.1lf",s);
	return 0;
}
P5707
#include<stdio.h>
int main()
{
	int s,v,t,i=7;
	scanf("%d%d",&s,&v);
	t=(s/v);
	t+=10;
	while(t>60)
	{
		i--;
		t-=60;
	}
	t=59-t;
	printf("%02d:%02d",i,t);
	return 0;
}
第二遍答案 
#include<stdio.h>
int main()
{
	int h,m,x,y,s,v,i;
	scanf("%d%d",&s,&v);
	if(s%v==0) i=10+s/v; 
	else i=11+s/v;
	if(480-i<0)
	{
		x=1440-(i-480);
		h=x/60;
		m=x%60;
			
	} else
	      {
	      	y=480-i;
	      	h=y/60;
	      	m=y%60;
		  }
	if(h>=10)
	{
		if(m>=10) printf("%d:%d",h,m);
		else printf("%d:0%d",h,m);
	} else
		  {
		  	if(m>=10) printf("0%d:%d",h,m);
		    else printf("0%d:0%d",h,m);
		  }
	return 0;
}
P3954
#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=(a*0.2)+(b*0.3)+(c*0.5);
	printf("%d",d);
	return 0;
}
P5707
#include<stdio.h>
int main()
{
	char a,b,c,d,e;
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
	printf("%c%c%c%c%c",e,d,c,b,a);
	return 0;
}
P5709
#include<stdio.h>
int main()
{
	int m,t,s,a,b;
	scanf("%d%d%d",&m,&t,&s);
	if(t!=0)
		{
			a=s/t;
			b=s%t;
			if(a>=m) printf("0");
			else if(b==0) printf("%d",m-a);
				 else printf("%d",m-a-1);
		}
	else printf("0");
	return 0;
}
P5710
#include<stdio.h>
int main()
{
	int x,one,two,a,b,c,d;
	scanf("%d",&x);
	if(x%2==0) one=1;
	else one=0;
	if(x>4&&x<=12) two=1;
	else two=0;
	if(one==1&&two==1) a=1;
	else a=0;
	if(one==1||two==1) b=1;
	else b=0;
	if((one==1&&two==0)||(one==0&&two==1)) c=1;
	else c=0;
	if(a==0&&b==0) d=1;
	else d=0;
	printf("%d %d %d %d",a,b,c,d);
	return 0;
}
P2433未完成 
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	if(T==1) printf("I love Luogu!");
	if(T==2) printf("6 4");
	if(T==3) printf("3\n12\n2");
	if(T==4)
	{
		double a=500,b;
		b=a/3;
		printf("%.3lf",b);
	}
	if(T==5) printf("15");
	if(T==6)
	{
		count<<sqrt(6*6+9*9);
	}
	if(T==7) printf("110\n90\n0\n");
	if(T==8)
	{
		count<<3.141593*10<<endl;
		count<<3.141593*25<<endl;
		count<<4/3.0*3.141593*10125;
	}
	if(T==9) printf("22");
	if(T==10) printf("9");
	if(T==11) count<<100/3.0;
	if(T==12) printf("13\nR");
	if(T==13) 
	{
		double  PI=3.141593,r=4,R=10,v,a;
		v=(4/3)*PI*(r*r*r+R*R*R);
		a=pow(v,1.0/3);
		count<<(int)a;
	}
	if(T==14) printf("50");
	return 0;	
}
P5718
#include<stdio.h>
int main()
{
	int i,x,n,a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	x=a[0];
	for(i=0;i<n;i++)
	{
		if(x>a[i]) x=a[i]; 
	}
	printf("%d",x);
	return 0;
}
#include<stdio.h>
int main()
{
	int n,k,a1=0,b1=0,i;
	scanf("%d%d",&n,&k);
	double a=0,b=0,x,y;
	for(i=1;i<=n;i++)
	{
		if(i%k==0)
		{
			a1+=i;
			a++;
		} else if(i%k!=0)
		{
			b1+=i;
			b++;
		}
	} 
	x=a1/a;
	y=b1/b;
	printf("%.1lf %.1lf",x,y);
	return 0;
}
10.10 上课
#include<stdio.h>
int main()
{
	int x;
	scanf("%d",x);
	if(x<1) printf("%d",x);
	else if(x>=1&&x<10) printf("%d",x*2+1);
	     else(x>=10) printf("%d",5*x-17);
	return 0;
} 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int guess=rand()%5+1;
	int x;
	scanf("%d",&x);
	if(guess==x) printf("猜对");
	else printf("猜错");
	printf("%d",guess);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,D,x;
	scanf("%lf%lf%lf",&a,&b,&c);
	D=b*b-4*a*c;
	if(a==0) printf("%.2lf",-c/b);
	else if(sqrt(D)>0)
			{
				printf("%.2lf %.2lf",(-b+sqrt(D)/2*a),(-b-sqrt(D)/2*a));
			}
			else if(sqrt(D)<0) printf("无实数根");
			     else printf("%.2lf",-b/2*a);
	return 0; 
}
10.10.7.1
#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x>=90) printf("gong xi ni kao le %d fen!",x);
	else printf("kao le %d fen bie xie qi!",x);
	return 0;
}
7.2
#include<stdio.h>
int main()
{
	int x,a,b,c,t;
	scanf("%d",&x);
	t=x;
	c=x%10;
	x/=10;
	b=x%10;
	x/=10;
	a=x%10;
	if(t>=100&&t<=999) 
	{
		if(a*a*a+b*b*b+c*c*c==t) printf("Yes");
		else printf("No");
	} else printf("Invalid Value.");
	return 0;
}
7.4
#include<stdio.h>
int main()
{
	int blank=0,digit=0,other=0;
	char ch;
	while((ch=getchar())!='\n')
	{
		switch(ch)
		{	case ' ':
			blank++;
			break;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				digit++;
				break;
			default:
				other++;
				break;
		}
    }
	printf("blank = %d, digit = %d, other = %d",blank,digit,other);
	return 0;
}
7.5
#include<stdio.h>
int main()
{
	long int x,a,b,c;
	scanf("%ld",&x);
	if(x>9999)
	{
		a=x%100;
		b=x/100;
		printf("%ld-%02ld",b,a);
	} else {
				a=x/100;
				c=x%100;
				if(a>=0&&a<22) b=20;
				else b=19;
				printf("%02ld%02ld-%02ld",b,a,c);
		   }
	return 0;
}
7.6
#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(c<a&&d<a) 
	{
		printf("%d-N %d-N\n",c,d);
		printf("zhang da zai lai ba");
	} else if(c<a&&d>=b)
	{
		printf("%d-Y %d-Y\n",c,d);
		c=1,d=2;
		printf("qing %d zhao gu hao %d",d,c);
	} else if(d<a&&c>=b)
	{
		printf("%d-Y %d-Y\n",c,d);
		c=1,d=2;
		printf("qing %d zhao gu hao %d",c,d);
	} else if(c<a&&(d>=a&&d<b))
	{
		printf("%d-N %d-Y\n",c,d);
		c=1,d=2;
		printf("%d: huan ying ru guan",d);
	} else if(d<a&&(c>=a&&c<b))
	{
		printf("%d-Y %d-N\n",c,d);
		c=1,d=2;
		printf("%d: huan ying ru guan",c);
	} else {
				printf("%d-Y %d-Y\n",c,d);
				printf("huan ying ru guan");
		   }
	return 0;	
}
7.3
#include<stdio.h>
int main()
{
	double a,c,d,e;
	int b;
	scanf("%lf%d%lf",&a,&b,&c);
	if(b==0)
	{
		d=a*2.455;
		if(d>c) printf("%.2lf T_T",d);
		else printf("%.2lf ^_^",d);
	} else 
		{
			e=a*1.26;
			if(e>c) printf("%.2lf T_T",e);
		else printf("%.2lf ^_^",e);
		}
	return 0;
}
P5720
#include<stdio.h>
int main()
{
	int a,i=1;
	scanf("%d",&a);
	while(a!=1)
	{
		a/=2;
		i++;
	}
	printf("%d",i);
	return 0;
}
P5721
#include<stdio.h>
int main()
{
	
	
	
	return 0;
}
P5721
#include<stdio.h>
int main()
{
	int a,i=1,t=0,c=1;
	scanf("%d",&a);
	while(a!=0)
	{
	for(t=0;t<a;t++)
	{
		printf("%02d",i);
		i++;
	}
	printf("\n");
	a--;
	}
	return 0;
}
P1009未完成
#include<stdio.h>
int main()
{
	long long int n,t,y,i;
	i=0;
	scanf("%lld",&n);
	y=n,t=n;
	while(n!=0)
	{
		while(y!=1)
		{
			y--;
			t*=y;
		}
		n--;
		i+=t;
		t=n;
		y=n;
	}
	printf("%lld",i);
	return 0;
}
指针，交换
#include<stdio.h>
void swap (int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int a=5,b=6;
	swap (&a,&b);
	printf("%d %d",a,b);
	return 0;
}
指针求数组最大最小值
#include<Stdio.h>
void search(int x[],int *max,int *min,int len)
{
	int i=0;
	*max=x[0],*min=x[0];
	for(i=1;i<len;i++)
	{
		if(x[i]>*max) *max=x[i];
		if(x[i]<*min) *min=x[i];
	}
	
}
int main()
{
	int max,min,len;
	int x[]={0,2,3,4,5,44,88,9,445};
	len=sizeof(x)/sizeof(x[0]);
	search(x,&max,&min,len);
	printf("%d %d",max,min);
	return 0;
}
指针返回a/b
#include<stdio.h>
int divide(int a,int b,int *result)
{
	int ret=1;
	if(b==0) ret=0;
	else 
		{
			*result=a/b;
		}
	return ret;
}
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(divide(a,b,&c)) 
	{
		printf("%d",c);
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,d1,d2,d3,p,s;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    d1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    d2=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    d3=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    p=(d1+d2+d3)/2;
    s=sqrt(p*(p-d1)*(p-d2)*(p-d3));
    if((d1+d2)!=d3&&(d3+d2)!=d1&&(d1+d3)!=d2) printf("L = %.2lf, A = %.2lf",d1+d2+d3,s);
    else printf("Impossible");
    return 0;
}//if((d1+d2)>d3&&(d3+d2)>d1&&(d1+d3)>d2)
        //printf("L = %.2lf, A = %.2lf",d1+d2+d3,s);
    //else if(d1+d2)&gt;d3)

#include<stdio.h>
int main()
{
	double h,r,n;
	scanf("%lf%lf",&h,&r);
	n=20/((r/10)*(r/10)*h/10*3.14);
	//if(n%1!=0) printf("%d",n);
	//else
	//	{
	//		n++;
	//		printf("%d",n);
	//	}
	n++;
	printf("%.0lf",n);
	return 0;
} 
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if((a%4==0&&a%100!=0)||a%400==0) printf("1");
	else printf("0");
	return 0;
}
#include<stdio.h>
int main()
{
	int i,N;
	int a[N,3];
	scanf("%d",N);
	for(i=0;i<N;i++)
	{
		scanf("%d%d%d",&a[i,0],&a[i,1],&a[i,2]);
		printf("\n");
	}
	for(i=0;i<N;i++)
	{
		printf("%d %d %d\n",a[i,0],a[i,1],a[i,2]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	char a;
	while((a=getchar())!='\n')
	{
		switch(a) 
		{
		case ' ':break;	
		case 'Z':printf("  ");
		case 'Y':printf("  ");
		case 'X':printf("  ");
		case 'W':printf("  ");
		case 'V':printf("  ");
		case 'U':printf("  ");
		case 'T':printf("  ");
		case 'S':printf("  ");
		case 'R':printf("  ");
		case 'Q':printf("  ");
		case 'P':printf("  ");
		case 'O':printf("  ");
		case 'N':printf("  ");
		case 'M':printf("  ");
		case 'L':printf("  ");
		case 'K':printf("  ");
		case 'J':printf("  ");
		case 'I':printf("  ");
		case 'H':printf("  ");
		case 'G':printf("  ");
		case 'F':printf("  ");
		case 'E':printf("  ");
		case 'D':printf("  ");
		case 'C':printf("  ");
		case 'B':printf("  ");
		case 'A':printf("*");
		}
		printf("\n");
	}
	printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
	return 0;
}
#include<stdio.h>
int main()
{
	int i,a,m,N=0,n,u[m],v[m];
	scanf("%d%d",&a,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&u[i],&v[i]);
		if(i==0)
		{
			n=v[i]-u[i];
			N+=n;
		}
		while(i>0&&i<m)
		{
			if((u[i]>u[i-1]&&u[i]<v[i-1])&&v[i]>v[i-1])
			{
				n=v[i]-v[i-1];
				v[i]=v[i-1];
				N+=n;
				break;
			} else if((v[i]<v[i-1]&&v[i]>u[i-1])&&u[i]<u[i-1])
					{
						n=u[i-1]-u[i];
						u[i]=u[i-1];
						N+=n;
						break;	
					}
				else if(u[i]>u[i-1]&&v[i]<v[i-1])
					{
						n=0;
						N+=n;
						break;
					} else if(u[i]<u[i-1]&&v[i]>v[i-1])
							{
								n=u[i-1]-u[i]+v[i]-v[i-1];
								N+=n;
								break;
							} else 
						{
					n=v[i]-u[i]+1;
					N+=n;
					break;
						}
		}
	}
	printf("%d",a-N);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int C=0,N,i,a[N],b[N],c[N];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	int x=0,y=0,z=0;
	for(i=0;i<N;i++)
	{
		if((sqrt(pow(a[i],2))-sqrt(pow(a[x],2)))<=10)
		{
			if((sqrt(pow(b[i],2))-sqrt(pow(b[x],2)))<=10)
			{
				if((sqrt(pow(c[i],2))-sqrt(pow(c[x],2)))<=10) c++;
			}
		}
		if((sqrt(pow(b[i],2))-sqrt(pow(b[x],2)))<=10)
		{
			if((sqrt(pow(a[i],2))-sqrt(pow(a[x],2)))<=10)
			{
				if((sqrt(pow(c[i],2))-sqrt(pow(c[x],2)))<=10) c++;
			}
		}
		if((sqrt(pow(a[i],2))-sqrt(pow(a[x],2)))<=10)
		{
			if((sqrt(pow(b[i],2))-sqrt(pow(b[x],2)))<=10)
			{
				if((sqrt(pow(c[i],2))-sqrt(pow(c[x],2)))<=10) c++;
			}
		}
	}
}
#include<stdio.h>
int main()
{
	char ac[]={1,2,3,4,5,6,7,8,9};
	char *p=ac;
	printf("%p %p",p,p+1);
	//*P->ac[0]
	int bc[]={1,2,3,4,5,6,7,8,9};
	int *P=bc;
	printf("%p %p",P,P+1);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int number;
	int *a,i;
	printf("输入数量：");
	scanf("%d",&number);
	//int a[number];
	a=malloc(number*sizeof(int));
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=number-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	free(a);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	void *p;
	int cnt=0;
	while((p=malloc(100*1024*1024)))
	{
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}
P1428
#include<stdio.h> 
int main()
{
	int n,i,N=0,x;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		N=0;
		for(x=0;x<i;x++)
		{
			if(a[i]>a[x]) N++;
		}
		b[i]=N;
	}
	b[0]=0;
	for(i=0;i<n;i++)
	{
		if(i!=n-1) printf("%d ",b[i]);
		else printf("%d",b[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a[105],i;
	for(i=0;a[i-1]!=0;i++)
	{
		scanf("%d",&a[i]);
		//i++;
	}
	//int L=sizeof(a)/sizeof(a[0]);
	for(i-=2;i>=0;i--)
	{
		if(i>0) printf("%d ",a[i]);
		else printf("%d",a[i]);
	}
	return 0;
}
P5727
#include<stdio.h>
int main()
{
	int a[200],n,i;
	scanf("%d",&n);
	if (n!=1)
	{
		for(i=0;a[i-1]!=1;i++)
		{
			a[i]=n;
			if(n%2!=0) n=n*3+1;
			else n/=2;
		}
		for(i=i-1;i>=0;i--)
		{
			if(i!=0) printf("%d ",a[i]);
			else printf("%d",a[i]);
		}
	} else
	{
		printf("1");
	}
	return 0;
}
P1980
#include<stdio.h>
int main()
{
	int x,y,i,a,b,c=0;
	scanf("%d%d",&x,&y);
	for(i=1;i<=x;i++)
	{
		b=i;
		while(b>0)
		{
			a=b%10;
			b/=10;
			if(y==a) c++;
		}
	}
	printf("%d",c);
	return 0;
}
P1035
#include<stdio.h>
int main()
{
	double S=0.0;
	int n=0,k;
	scanf("%d",&k);
	while(S<=k*1.0)
	{
		S+=1.0/(n+1);
		n++;
	}
	printf("%d",n);
	return 0;
}
P2669
#include<stdio.h>
int main()
{
	int i,a,c=1,b,n=0,k;
	scanf("%d",&k);
	for(a=1;c<=k;a++)
	{
		b=a;
		i=a;
		while(i>0)
		{
			n+=b;
			i--;
			c++;
			if(c>k) break;
		}
	}
	printf("%d",n);
	return 0;
}
P5722
#include<stdio.h>
int main()
{
	int a,b=0,i;
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		b+=i;
	}
	printf("%d",b);
	return 0;
}
P1423
#include<stdio.h>
int main()
{
	double l=0,v=2,s;
	int n=0;
	scanf("%lf",&s);
	while(l<=s)
	{
		l+=v;
		v*=0.98;
		n++;
	}
	printf("%d",n);
	return 0;
}
P1307
#include<stdio.h>
int main()
{
	int N,a=0;
	scanf("%d",&N);
	while(N!=0)
	{
		a=a*10+N%10;
		N/=10;
	}
	printf("%d",a);
	return 0;
}
#include<stdio.h>
int main()
{
	double a[49]={0,1.0,1.0};
	int k,i;
	scanf("%d",&k);
	for(i=3;i<=k;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	printf("%.2lf",a[k]);
	return 0;
}
#include<stdio.h>
int main()
{
	double a=1.0,b=1.0,c=1.0,i,k;
	scanf("%lf",&k);
	if(k==0.0) printf("0.00");
	else
	{
		for(i=2;i<k;i++)
		{
			c=a+b;
			b=a;
			a=c;
		}
	printf("%.2lf",c);
	}
	return 0;
}
P5724
#include<stdio.h>
int main()
{
	int a[105],N,n,i,max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0],min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max) max=a[i];
		else if(a[i]<min) min=a[i];
	}
	N=max-min;
	printf("%d",N);
	return 0;
}
P1420
#include<stdio.h>
int main()
{
	long n,a[10001];
	scanf("%ld",&n);
	int i,max=0,x=1;
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i]-a[i-1]==1) x++;
		else x=1;
		if(x>max) max=x;
	}
	printf("%d",max);
	return 0;
}
P1075
#include<stdio.h>
#include<math.h>
int main()
{
	int x,i,n=0;
	scanf("%d",&x);
	if(x%2==0) for(i=2;i<sqrt(x);i+=2)
	{
		if(x%i==0)
		{
			printf("%d",x/i);
		}
	}
	else for(i=3;i<sqrt(x);i+=2)
	{
		if(x%i==0)
		{
			printf("%d",x/i);
		}
	}
	return 0;
}
P5725
#include<stdio.h>
int main()
{
	int i=1,a,b,c=1,d=1,x;
	scanf("%d",&x);
	while(i<=x*x)
	{
		printf("%02d",i);
		if(i%x==0) printf("\n");
		i++;
	}
	printf("\n");
	//int a,b,c;
	//scanf("%d",&n);
	for(a=1;a<=x;a++)
	{
		for(b=x-1;b>=a;b--) printf("  ");
		for(c=1;c<=a;c++)
		{
			printf("%02d",d);
			d++;
		}
		printf("\n");
	} 
	return 0;
}
P4956
#include<stdio.h> 
int main()
{
	int n,x,k;
	scanf("%d",&n);
	x=99;
	for(k=1;k<100;k++)
	{
		for(x=99;x>0;x--)
		{
			if(n==x*364+k*1092) 
			{
				printf("%d\n%d",x,k);
				return 0;
			}
		}
	}
	//return 0;
}
P5728
#include<stdio.h>
#include<math.h>
int main()
{
	int N,a,b,n=0;
	scanf("%d",&N);
	int d[1005][4]={0};
	for(a=1;a<=N;a++)
	{
		scanf("%d%d%d",&d[a][1],&d[a][2],&d[a][3]);
	}
	for(a=1;a<N;a++)
	{
		for(b=a+1;b<=N;b++)
		{
			int x,y,z,w1,w2,w;
			x=abs(d[a][1]-d[b][1]);
			y=abs(d[a][2]-d[b][2]);
			z=abs(d[a][3]-d[b][3]);
			w1=d[a][1]+d[a][2]+d[a][3];
			w2=d[b][1]+d[b][2]+d[b][3];
			w=abs(w1-w2);
			if(x<=5&&y<=5&&z<=5&&w<=10) n++;
		}
	}
	printf("%d",n);
	return 0;
}
P1047
#include<stdio.h>
int main()
{
	int l,m,n,i;
	scanf("%d%d",&l,&m);
	int M[10005]={0};
	for(i=0;i<=l;i++)
	{
		M[i]=1;
	}
	int u[105]={0},v[105]={0};
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&u[i],&v[i]);
	}
	for(i=0;i<m;i++)
	{
		n=v[i];
		while(n>=u[i])
		{
			M[n]=0;
			n--;
		}
	}
	n=0;
	for(i=0;i<=l;i++)
	{
		if(M[i]==1) n++;
	}
	printf("%d",n);
	return 0;
}
P5729
#include<stdio.h>
int main()
{
	int w,x,h,q,i,a[100],b[100],c[100];
	scanf("%d%d%d",&w,&x,&h);
	scanf("%d",&q);
	int Z[21][21][21]={0};
	for(i=0;i<q;i+=2)
	{
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&a[i+1],&b[i+1],&c[i+1]);
	}
	int V=w*x*h;
	int A,B,C,count=0;
	for(i=0;i<q;i+=2)
	{
		A=a[i+1];
		while(A>=a[i])
		{
			B=b[i+1];
			while(B>=b[i])
			{
				C=c[i+1];
				while(C>=c[i])
				{
					Z[A][B][C]=1;
					C--;
				}
				B--;
			}
			A--;
		}
	}
	for(A=0;A<=w;A++)
	{
		for(B=0;B<=x;B++)
		{
			for(C=0;C<=h;C++)
			{
				if(Z[A][B][C]==1) count++;
			}
		}
	}
	count=V-count;
	printf("%d",count);
	return 0;
}
#include<stdio.h>
int main()
{
	int a=1,b=0,n;
	scanf("%d",&n);
	while(a<=n)
	{
		if(a%2==0) b-=a;
		else b+=a;
		a++;
	}
	printf("%d\n",b);
	return 0;
}
#include<stdio.h>
int main()
{
	int w,x,h,q,i,j,k,x1,y1,z1,x2,y2,z2;
	int V[21][21][21]={0};
	int m,count=0;
	scanf("%d%d%d",&w,&x,&h);
	scanf("%d",&q);
	int v=w*x*h;
	for(m=0;m<q;m++)
	{
		scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
		for(i=x1;x<=x2;i++)
		{
			for(j=y1;j<=y2;j++)
			{
				for(k=z1;k<=z2;k++)
				{
					V[i][j][k]=1;
				}
			}
		}
	}
	for(i=1;i<=w;i++)
	{
		for(j=1;j<=x;j++)
		{
			for(k=1;k<=h;k++)
			{
				if(V[i][j][k]==0) count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}
#include<stdio.h>
int main()
{
	int a,c=0,n;
	scanf("%d",&n);
	do
	{
		a=n%10;
		n/=10;
		printf("%d",a);
		//c=c*10+a;
	}while(n>0);
	//printf("%d",c);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,a,y=0;
	scanf("%d",&x);
	a=sqrt(x);
	for(i=3;i<=a;i+=2)
	{
		if(x%i==0) 
		{
			y=1;
			break;
		}
	}
	if(y==1) printf("no");
	else printf("yes");
	return 0;
}
#include<stdio.h>
int main()
{
	int a,b,i,n,c;
	scanf("%d",&n);
	c=n;
	for(i=1;i<=c;i++)
	{
		for(a=1;a<=n-1;a++)
		{
			printf(" ");
		}
		for(b=1;b<=2*i-1;b++)
		{
			printf("*");
		}
		printf("\n");
		n--;
	}
	return 0;
}
10月24日 
7-4
#include<stdio.h>
int main()
{
	int n=0,x;
	scanf("%d",&x);
	do
	{
		n+=x;
	} while(x--);
	printf("sum = %d",n);
	return 0;
}
7-6
#include<stdio.h>
#include<math.h>
int main()
{
	int M,N,i,a,b,c;
	scanf("%d%d",&M,&N);
	if(M<=N&&M>=100&M<=999&&N>=100&N<=999)
	{
		for(i=M;i<N+1;i++)
			{
				a=pow(i/100,3);
				b=pow((i%100)/10,3);
				c=pow(i%10,3);
				if(a+b+c==i) printf("%d\n",i);
			}
	}else printf("Invalid Value.");
	return 0;
}
7-2
#include<stdio.h>
int main()
{
	int a[10],i,x,count=0,X;
	scanf("%d",&x);
	if(x==0) printf("ling");
	else if(x>0)
	{
		i=0;
		X=x;
		while(x>0)
		{
			a[i]=x%10;
			i++;
			count++;
			x/=10;
		}
		for(i=count-1;i>=0;i--)
		{
			if(a[i]==0) printf("ling");
			if(a[i]==1) printf("yi");
			if(a[i]==2) printf("er");
			if(a[i]==3) printf("san");
			if(a[i]==4) printf("si");
			if(a[i]==5) printf("wu");
			if(a[i]==6) printf("liu");
			if(a[i]==7) printf("qi");
			if(a[i]==8) printf("ba");
			if(a[i]==9) printf("jiu");
			if(X>10) printf(" ");
			X/=10;
		}
	}
	else if(x<0)
	{
		printf("fu ");
		i=0;
		X=-x;
		x=-x;
		while(x>0)
		{
			a[i]=x%10;
			i++;
			count++;
			x/=10;
		}
		for(i=count-1;i>=0;i--)
		{
			if(a[i]==0) printf("ling");
			if(a[i]==1) printf("yi");
			if(a[i]==2) printf("er");
			if(a[i]==3) printf("san");
			if(a[i]==4) printf("si");
			if(a[i]==5) printf("wu");
			if(a[i]==6) printf("liu");
			if(a[i]==7) printf("qi");
			if(a[i]==8) printf("ba");
			if(a[i]==9) printf("jiu");
			if(X>10) printf(" ");
			X/=10;
		}
	}
	return 0;
}
7-5
#include<stdio.h>
int main()
{
	int i,a[11][3],N;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	}
	for(i=0;i<N;i++)
	{
		if(a[i][0]==1)
		{
			if(a[i][1]>130) printf("ni li hai! ");
			else if(a[i][1]==130) printf("wan mei! ");
			else printf("duo chi yu! ");
			if(a[i][2]>27) printf("shao chi rou!\n");
			else if(a[i][2]==27) printf("wan mei!\n");
			else printf("duo chi rou!\n");
		}else if(a[i][0]==0)
		{
			if(a[i][1]>129) printf("ni li hai! ");
			else if(a[i][1]==129) printf("wan mei! ");
			else printf("duo chi yu! ");
			if(a[i][2]>25) printf("shao chi rou!\n");
			else if(a[i][2]==25) printf("wan mei!\n");
			else printf("duo chi rou!\n");
		}
	}
	return 0;
}
7-7
#include<stdio.h>
int main()
{
	int i,lun[5],max=0,a,b,c=0,d=0;
	for(i=1;i<=4;i++)
	{
		scanf("%d",&lun[i]);
		if(max<lun[i]) max=lun[i];
	}
	scanf("%d%d",&a,&b);
	for(i=1;i<=4;i++)
	{
		if(lun[i]<a||max-lun[i]>b)
		{
			c+=i;
			d++;
		}
	}
	if(c==0) printf("Normal");
	else if(d==1) printf("Warning: please check #%d!",c);
	else printf("Warning: please check all the tires!");
	return 0;
}
7-3
#include<stdio.h>
int main()
{
	int i,N,n,d=0,a=0,b=0;
	double c=0.0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&n);
		if(n%3==0)
		{
			if(a<n) a=n;
		}
		else if((n-1)%3==0) b++;
		else if((n-2)%3==0)
		{
			c+=n;
			d++;
		}
	}
	c=c/d;
	if(a>0) printf("%d ",a);
	else printf("NONE ");
	if(b>0) printf("%d ",b);
	else printf("NONE ");
	if(c>0) printf("%.1lf",c);
	else printf("NONE");
}
7-1
#include<stdio.h>
int main()
{
	int x,n=0,a=1;
	scanf("%d",&x);
	int k=0;
	while(k<x)
	{
		k=k*10+1;
		n++;
	}
	while(a!=0)
	{
		a=k%x;
		printf("%d",k/x);
		if(a==0) break;
		k=a*10+1;
		n++;
	}
	printf(" %d",n);
	return 0;
}
#include<stdio.h>
int main()
{
	char ch;
	while((ch=getchar())!='\n')
	{
		putchar(ch);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int n,b=1,a=1,i;
	scanf("%d",&n);
	double N=0.0;
	for(i=1;i<=n;i++)
	{
		N+=(1.0/a)*b;
		a+=3;
		b=-b;
	}
	printf("%.3lf",N);
	return 0;
}
#include<stdio.h>
int main()
{
    char a[500005];
    int i=0,x=0;
    do{
        a[i]=getchar();
        i++;
        x++;
    }while(a[i-1]!='\n');
    x--; 
    while(x>=0)
    {
        putchar(a[x]);
        x--;
    }
    return 0;
}
#include<stdio.h>
int main() 
{
	int i,a[4];
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i,lunzi[5],max=0,a,b,c=0,d=0;
	for(i=1;i<=4;i++)
	{
		scanf("%d",&lunzi[i]);
		if(max<lunzi[i]) max=lunzi[i];
	}
	scanf("%d%d",&a,&b);
	for(i=1;i<=4;i++)
	{
		if(lunzi[i]<a||max-lunzi[i]>b)
		{
			c+=i;
			d++;
		}
	}
	if(c==0) printf("Normal");
	else if(d==1) printf("Warning: please check #%d!",c);
	else printf("Warning: please check all the tires!");
	return 0;
}
P5733
#include<stdio.h>
int main()
{
	char a[105];
	int i;
	scanf("%s",a);
	for(i=0;i<105;i++)
	{
		if(a[i]>=97&&a[i]<=122) a[i]-=32;
	}
	printf("%s",a);
	return 0;
}
P1914
#include<stdio.h>
int main()
{
	char a[55];
	int i,n;
	scanf("%d",&n);
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",(a[i]-'a'+n)%26+'a');
	}
	return 0;
}
P5015
#include<stdio.h>
int main()
{
	int i=0,b=0;
	char a[10];
	do
	{
		scanf("%c",&a[i]);
		if(a[i]==' ') b--;
		b++;
		i++;
	}while(a[i-1]!='\n');
	b-=1;
	printf("%d",b);
	return 0;
}
P5712
#include<stdio.h> 
int main()
{
	int a;
	scanf("%d",&a);
	if(a==0||a==1) printf("Today, I ate %d apple.",a);
	else printf("Today, I ate %d apples.",a); 
	return 0;
}
P5716
#include<stdio.h>
int func(int y)
{
	if((y%100!=0&&y%4==0)||y%400==0) return 1;
	else return 0;

}
int main()
{
	int y,m;
	scanf("%d%d",&y,&m);
	int x=func(y);
	if(x==1)
	{
		switch (m)
		{
			case 1:
				printf("31\n");
				break;
			case 2:
				printf("29\n");
				break;
			case 3:
				printf("31\n");
				break;
			case 4:
				printf("30\n");
				break;
			case 5:
				printf("31\n");
				break;
			case 6:
				printf("30\n");
				break;
			case 7:
				printf("31\n");
				break;
			case 8:
				printf("31\n");
				break;
			case 9:
				printf("30\n");
				break;
			case 10:
				printf("31\n");
				break;
			case 11:
				printf("30\n");
				break;
			case 12:
				printf("31\n");
				break;
		}
	}
	if(x==0)
	{
		switch (m)
		{
			case 1:
				printf("31\n");
				break;
			case 2:
				printf("28\n");
				break;
			case 3:
				printf("31\n");
				break;
			case 4:
				printf("30\n");
				break;
			case 5:
				printf("31\n");
				break;
			case 6:
				printf("30\n");
				break;
			case 7:
				printf("31\n");
				break;
			case 8:
				printf("31\n");
				break;
			case 9:
				printf("30\n");
				break;
			case 10:
				printf("31\n");
				break;
			case 11:
				printf("30\n");
				break;
			case 12:
				printf("31\n");
				break;
		}
	}
	return 0;
}
struct run
{
	int year;
	int month;
	int days;
};
struct Frun
{
	int year;
	int month;
	int days;
};*/
/*
#include<stdio.h>
#include<math.h>
double len(double a[],double b[])
{
    double l1,l2,l3;
    l1=sqrt(pow(a[1]-a[0],2.0)+pow(b[1]-b[0],2.0));
    l2=sqrt(pow(a[2]-a[1],2.0)+pow(b[2]-b[1],2.0));
    l3=sqrt(pow(a[2]-a[0],2.0)+pow(b[2]-b[0],2.0));
    double sum=l1+l2+l3;
    return sum;
}
int main()
{
    int i;
	double a[3],b[3],sum=0.0;
    for(i=0;i<3;i++)
    {
        scanf("%lf %lf",&a[i], &b[i]);
    }
    sum=len(a,b);
    printf("%.2lf\n",sum);
    return 0;
}*/
/*
P5732
#include<stdio.h>
int main()
{
int a[25][25]={0},i,x,j;
scanf("%d",&x);
for(i=1;i<=x;i++)
{
for(j=1;j<=i;j++)
{
if(i==1&&j==1)
{
a[1][1]=1;
printf("%d ",a[i][j]);
break;
}
a[i][j]=a[i-1][j-1]+a[i-1][j];
printf("%d ",a[i][j]);
}
printf("\n");
}
return 0;
}
#include<stdio.h>
int main()
{
	unsigned int a=1;
	a-=2;
	printf("%u\n",a);
	if(a==-1) printf("=\n");
	return 0;
}*/
/*
P2550
#include<stdio.h>
int cp(int A[],int B[],int n)
{
	int j,k,l=0;
	for(j=0;j<7;j++)
	{
		for(k=0;k<7;k++)
		{
			if(A[j]==B[k])
			{
				l++;
			}
		}
	}
	return l;
}
int main()
{
	int a[1005][7]={0},b[7]={0},c[1005]={0},d[7]={0},i,j,n;
	scanf("%d",&n);
	for(i=0;i<7;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<7;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		c[i]=cp(a[i],b,n);
		if(c[i]==0) break;
		c[i]--;
		d[c[i]]++;
	}
	for(i=6;i>=0;i--)
	{
		if(i!=0) printf("%d ",d[i]);
		else printf("%d",d[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a[34]={0},b[8]={0};
	int i,j,n,q,p,t=0;
	scanf("%d",&n);
	for(i=0;i<7;i++)
	{
		scanf("%d",&q);
		a[q]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<7;j++)
		{
		scanf("%d",&p);
			if(a[p]==1) t++;
		}
		b[7-t]++;
		t=0;
	}
	for(i=0;i<7;i++)
	{
		if(i!=6) printf("%d ",b[i]);
		else printf("%d",b[i]);
	}
	return 0;
}*/
/*P1614*/
/*
#include<stdio.h>
int main()
{
	int a[3000]={0},b[3000]={0},x,i,j,m,n;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-m;i++)
	{
		for(j=i;j<i+m;j++)
		{
			b[i]+=a[j];
		}
	}
	int min=b[0];
	for(i=0;b[i]!=0;i++)
	{
		if(min>b[i]&&b[i]!=0) min=b[i];
	}
	printf("%d\n",min);
	return 0;
}*/
/*
P5731
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n*n;i++)
	{
		for(j=i;j<i+n;j++)
		{
			printf("% 3d",j);
		}
		i=j-1;
		printf("\n");
	}
	return 0;
}*/
/*
void search(int A[],int B,int N)
{
	int a=N/2,i;
	while()
}*/
/*P2249
#include<stdio.h>
int main()
{
	int a[1000001]={0},n,i,m,b;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);

	}
	int l=1,r=n,s;
	int M=(l+r)/2;
	for(i=1;i<=m;i++)
	{
		scanf("%d",&b);
		s=-1;
		while(r>l)
		{
			if(a[M]<b)
			{
				l=M+1;
				M=(r+l)/2;
			}
			else if(a[M]>=b)
			{
				r=M;
				M=(r+l)/2;
			}
			if(a[l]==b)
			{
				s=l;
				break;
			}
		}
		printf("%d ",s);
		l=1,r=n;
	}
	return 0;
}*/
/*P5737
#include<stdio.h>
int main()
{
	int a,i,b,c[500]={0},n=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if((i%100!=0&&i%4==0)||i%400==0)
		{
			c[n]=i;
			n++;
		}
	}
	printf("%d\n",n);
	for(i=0;i<n;i++)
	{
		if(i!=n-1) printf("%d ",c[i]);
		else printf("%d\n",c[i]);
	}
	return 0;
}*/
/*P5736
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,a,j,b[100],s=1,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a==1) continue;
		for(j=2;j<=sqrt(a);j++)
		{
			if(a%j==0)
			{
				s=-1;
				break;
			}
		}
		if(s==1)
		{
			b[x]=a;
			x++;
		} else s=1;
	}
	for(i=0;i<x;i++)
	{
		if(i!=x-1) printf("%d ",b[i]);
		else printf("%d\n",b[i]);
	}
	return 0;
}*/
/*P5738
#include<stdio.h>
int main()
{
	int m,n,i,j,a[105]={0},b[25]={0},max,min,x=0;
	double c[100]={0.0},MAX;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[j]);
			x+=b[j];
		}
		max=b[0];
		min=b[0];
		for(j=1;j<m;j++)
		{
			if(b[j]>max) max=b[j];
			if(b[j]<min) min=b[j];
		}
		x=x-max-min;
		c[i]=x*1.0/(m-2);
		x=0;
	}
	MAX=c[0];
	for(i=1;i<n;i++)
	{
		if(MAX<c[i]) MAX=c[i];
	}
	printf("%.2lf\n",MAX);
	return 0;
}*/
/*p5739
#include<stdio.h>
int P(int n)
{
	if(n!=1)
	{
		return n*P(n-1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int x=P(n);
	printf("%d\n",x);
	return 0;
}*/
















 