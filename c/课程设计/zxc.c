#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100 //最大学生人数
struct record
{
    char num[20];//   学号
    char name[10];//  姓名
    char grade[10];//  年级
    char area[10];//  学区
    char major[20];// 专业
    char type[20];//  车种
    char tel[20];//   电话
    char mail[20];//  邮箱
}stu[N];

int k=1;
int m;
int n;
int menu();   //     菜单
void help();  //     帮助界面
void search();//     自行车拥有者系统的查询
void add();   //     自行车拥有者系统的增加
void del();   //     自行车拥有者系统的删除
void input(); //     自行车拥有者系统的录入
void save();  //     自行车拥有者系统的保存
int retrieve();//    自行车拥有者系统的读取
void sort();  //     自行车拥有者系统的排序
void welcome();//    欢迎界面
//int mima();   //     密码
void count();  //    自行车拥有者系统的统计
void output(); //    自行车拥有者系统的显示
void modify(); //    自行车拥有者系统的修改
void quit();   //    退出


int main()
{
    //if(mima());
	while(k)
	{   
		//system("cls");
		welcome();
		system("pause");                    //pause()会令当前的进程暂停(进入睡眠状态)，直到被信号(signal)所中断。//
		system("cls");				        //“Press any key to exit”的字，等待用户按一个键，然后返回。system("pause")在编写C时包含在"stdlib.h"头文件中//
        printf("请按任意键进入主菜单!\n");
		system("cls");
		menu();
		system("pause");
	}
	return 0;
}
int menu()
{
    int num;
    printf("\n\n                               【自行车存放管理系统】\n\n");
    printf("\n");  
    printf("                       --------------系统功能菜单-----------\n");
    printf("                      |= = = = = = = = = = = = = = = = = = =|\n");
    printf("\n                      |   1.系统帮助说明    2.输入学生信息  |\n");
    printf("\n                      |   3.查询学生信息    4.修改学生信息  |\n");
    printf("\n                      |   5.增加学生信息    6.删除学生信息  |\n"); 
    printf("\n                      |   7.显示当前信息    8.保存当前信息  |\n");
    printf("\n                      |   9.统计学生信息    0.退出系统      |\n");
    printf("\n                      |注意，输入的学生信息即为自行车车主   |\n"); 
	printf("\n                      |= = = = = = = = = = = = = = = = = = =|\n");
    printf("\n请选择菜单编号: ");
    scanf("%d",&num);       
    switch(num)
    {  case 1:system("cls");help();break;
       case 2:system("cls");input();break;
       case 3:system("cls");search();break;
       case 4:system("cls");modify();break;
       case 5:system("cls");add();break;
       case 6:system("cls");del();break;
       case 7:system("cls");output();break;
       case 8:system("cls");save();break;
       case 9:system("cls");count();break;
       case 0:system("cls");k=0;quit();break;
       default:printf("请在0--9之间选择\n");
	}
	return 1;
}
void help()
{
    printf("\n      *=★========================★==========================★=* \n");
    printf("\n      |               欢迎进入帮助系统!                          | \n");
    printf("\n      |             1.请按照菜单提示进入数字选项!                | \n");
    printf("\n      *             2.注意操作学生信息后,请切记保存!             * \n");
    printf("\n      |             3.请及时反馈不足,提供宝贵建议!               | \n");
    printf("\n      *=★========================★==========================★=* \n");
	printf("\n");
}
void search()
{   int i;
    int t;
    int flag;
    char s1[30];
    printf("\t\t         1.按学号查询          \n");
    printf("\t\t         2.按姓名查询          \n");
    printf("\t\t         3.退出本菜单          \n");
    while(1)
	{   
        flag=0;
        printf("\n请输入子菜单编号: ");
        scanf("%d",&t);
		switch(t)
		{ 
            case 1: 
                printf("\n请输入要查询的学生学号:");
		        scanf("%s",s1);
		        for(i=0;i<n;i++)
		        if(strcmp(stu[i].num,s1)==0)
			    {
                    flag=1;
				    printf("所需学生信息如下：\n \n");
                    printf("======================================================================================================\n"); 
                    printf("   学生学号   学生姓名   年级    学区    专业       车种       电话              E-mail      \n");
                    printf("======================================================================================================\n");
                    printf("   %-8s   %-8s   %-6s   %-6s    %-6s    %-6s  %-12s     %-16s\n", stu[i].num,stu[i].name,stu[i].grade,stu[i].area,stu[i].major,stu[i].type,stu[i].tel,stu[i].mail);
			    } 
			    if(flag==0)
                printf("该学号不存在!\n");
                break;
		   case 2: 
                printf("\n请输入要查询的学生的姓名: \n");
                scanf("%s",s1);
		        for(i=0;i<n;i++)
			    if(strcmp(stu[i].name,s1)==0)
			    {
                    flag=1;
				    printf("所需学生信息如下：\n \n");
                    printf("======================================================================================================\n"); 
                    printf("   学生学号   学生姓名   年级    学区    专业       车种       电话              E-mail      \n");
                    printf("======================================================================================================\n");
                    printf("   %-8s   %-8s   %-6s   %-6s    %-6s    %-6s  %-12s     %-16s\n", stu[i].num,stu[i].name,stu[i].grade,stu[i].area,stu[i].major,stu[i].type,stu[i].tel,stu[i].mail);
			    } 
		        if(flag==0)
                printf("该姓名不存在!\n");
                break;
		   case 3:return;
		   default:printf("请在1--3之间选择\n");
		 } 
	}
}
void add()     //增加
{   
    int i = n;
    int j;
    int flag = 1;
    printf("请输入要增加的学生人数(1-100):\n");
    scanf("%d",&m);
	if(m<1||m>100)
	{   
        flag=1;
        printf("对不起,输入错误.请认真检查后重新输入!\n");
	}
	do
	{	flag=1;
		while(flag)
		{  
            flag=0;
            printf("请输入第%d个学生的学号(8位):\n", i+1);
            scanf("%s",stu[i].num);
            for(j=0;j<i;j++)
            if(strcmp(stu[i].num,stu[j].num)==0)
			{  
                printf("该学号已经存在，请仔细核查后重新输入!\n");
                flag=1;
				break;
			}
        }
		printf("请输入第%d个学生的学生姓名:\n",i+1);
        scanf("%s",stu[i].name);
		printf("请输入第%d个学生的学生年级:\n",i+1);
        scanf("%s",&stu[i].grade);
		printf("请输入第%d个学生的学生学区:\n",i+1);
        scanf("%s",stu[i].area);
		printf("请输入第%d个学生的学生专业\n",i+1);
        scanf("%s",stu[i].major);
		printf("请输入第%d个学生的车种:\n",i+1);
        scanf("%s",stu[i].type);
		printf("请输入第%d个学生的学生电话(11位):\n",i+1);
        scanf("%s",stu[i].tel);
		printf("请输入第%d个学生的学生E-mail:\n",i+1);
        scanf("%s",stu[i].mail);
        if(flag==0)
			i++;
	} while(i<n+m);
	n=n+m;
    printf("输入完毕!\n\n");
    sort();
    save(); 
}
void del()    //删除
{  	
    int i;
	int j;
	int t;
	int flag;
    char s1[30];
    printf("\t\t         1.按学号删除          \n");
    printf("\t\t         2.按姓名删除          \n");
    printf("\t\t         3.退出本菜单          \n");
    while(1)
	{   
        flag=0;
        printf("\n请输入子菜单编号: ");
        scanf("%d",&t);
		switch(t)
		{	
            case 1:
			printf("请输入将要删除的学生的学号(8位):\n");
    		scanf("%s",s1);
			for(i=0;i<n;i++)
			 { if(strcmp(stu[i].num,s1)==0)
				  {flag=1;
				   for(j=i;j<n-1;j++)
				    {stu[j]=stu[j+1];
					}
				  }
			 }
			if(flag==0)
				{ 
                    printf("该学号不存在!\n");
				}
        	if(flag==1)
				{
                    save();
				 printf("删除成功!\n显示结果退出后请按7!!!\n");
			     n--;
				}break;
			case 2:
			printf("\n请输入要删除的学生的姓名: \n");
        	scanf("%s",s1);
            for(i=0;i<n;i++)
			{if(strcmp(stu[i].name,s1)==0)
				{ 
                    flag=1;
				  for(j=i;j<n-1;j++)
					stu[j]=stu[j+1];
				}
			}
			if(flag==0)
				{
                    printf("该姓名不存在!\n");
				}
        	if(flag==1)
				{
                    save();
				 printf("删除成功!\n显示结果退出后请按7!!!\n");
				 n--;
				}
			if(flag==0)
            	printf("该选项不存在!\n");
            	break;
	    	case 3:	return;
			default:printf("请在1--3之间选择\n");
		}
	}
}
void input()            //实现录入自行车拥有者基本信息功能
{      
    int i;
    int t;
	int flag=1;
    printf("\n\t\t=================================\n");
    printf("\n\t\t|         1.手动输入            |\n");
	printf("\n\t\t|         2.从文件中读取        |\n");
	printf("\n\t\t|         3.退出本菜单          |\n");
	printf("\n\t\t=================================\n");
    while(1)
    {    flag=1;
        printf("\n请输入子菜单编号: ");
        scanf("%d",&t);
		switch(t)
		{
	    	case 1:while(flag)
		        { 
                    flag=0;
				    printf("请输入需要创建信息的学生人数(1-100):\n");
					scanf("%d",&n);
					if(n<1||n>100)
					{ 
                        flag=1;
						printf("对不起，输入错误，请认真检查后重新输入!\n");
			        }
			    }
				      for(i=0;i<n;i++)
				       {  
                            printf("请输入第%d个学生的基本信息:\n",i+1);
				            printf("请输入学号(8位):\n");
					        scanf("%s",stu[i].num);
                            printf("请输入姓名:\n");
					        scanf("%s",stu[i].name);
					        getchar();
                            printf("请输入年级（大一/二/三/四）:\n");
					        scanf("%s",&stu[i].grade);
					        if(strcmp(stu[i].grade,"大一") == 0) 
         				    {printf("同学你需要把车停在A车棚\n");}
       					    else if(strcmp(stu[i].grade,"大二") == 0) 
         				    {printf("同学你需要把车停在B车棚\n"); }
                            else if(strcmp(stu[i].grade,"大三") == 0) 
						    {printf("同学你需要把车停在C车棚\n"); }
                            else if(strcmp(stu[i].grade,"大四") == 0) 
                            {printf("同学你需要把车停在D车棚\n"); }
					        printf("请输入学区(长安校区/雁塔校区):\n");
					        scanf("%s",stu[i].area);
						    printf("请输入专业（如：通信工程）:\n");
					        scanf("%s",stu[i].major);
						    printf("请输入车种（自行车，电动车）:\n");
				            scanf("%s",stu[i].type);
						    printf("请输入电话号码(11位):\n");
				            scanf("%s",stu[i].tel);
        	                printf("请输入Email地址:\n");
					        scanf("%s",stu[i].mail);
				       }
	                    printf("录入完毕!\n");
	                    save();
	                    sort();
                        save();
                        break;
			    case 2:n = retrieve();
			 	       printf("\n调取成功,退出后请按7查看...\n");break;
			    case 3:return;	break;
			    default:printf("请在1--3之间选择\n"); 
		   }
	   }
}
void save()  //保存学生信息到文件的函数
{ 	
    int i;
    FILE *fp;
    if((fp=fopen("student.txt","wb"))==NULL)
     {  printf("文件不能打开!\n");
        return ; 
    }
    for(i=0;i<n;i++)                        
		if(fwrite(&stu[i],sizeof(struct record),1,fp)!=1)
			printf("文件输入错误!\n");
		fclose(fp);
}
int retrieve()
{   
    int i = 0;
	FILE *fp;
	if((fp=fopen("student.txt","rt"))==NULL)
	  { printf("库存文件不存在!!!请创建后打开...");
		return 0;
	  }
	while(!feof(fp))
	  { fread(&stu[i],sizeof(struct record),1,fp);
		if(stu[i].num == 0)
			break;
		else
			i++;
      } 
	fclose(fp);
    return i;
}
void sort()    //对学生信息按学号升序排序
{   
    int i;
	int j;
    char temp[10];
    for(i=0;i<n-1;i++)
	 {  for(j=n-1;j>i;j--)
		 if(strcmp(stu[j-1].num,stu[j].num)>0)
		  {     strcpy(temp,stu[j-1].num);       //学号
                strcpy(stu[j-1].num,stu[j].num);
                strcpy(stu[j].num,temp);
                strcpy(temp,stu[j-1].name);       //姓名
                strcpy(stu[j-1].name,stu[j].name);
                strcpy(stu[j].name,temp);
                strcpy(temp,stu[j-1].grade);       //年级
                strcpy(stu[j-1].grade,stu[j].grade);
                strcpy(stu[j].grade,temp);
                strcpy(temp,stu[j-1].area);        //学区
                strcpy(stu[j-1].area,stu[j].area);
                strcpy(stu[j].area,temp);
				strcpy(temp,stu[j-1].major);       //专业
                strcpy(stu[j-1].major,stu[j].major);
                strcpy(stu[j].major,temp);
				strcpy(temp,stu[j-1].type);        //车种
                strcpy(stu[j-1].type,stu[j].type);
                strcpy(stu[j].type,temp);
				strcpy(temp,stu[j-1].tel);        //电话号码
                strcpy(stu[j-1].tel,stu[j].tel);
                strcpy(stu[j].tel,temp);
				strcpy(temp,stu[j-1].mail);       //邮箱地址
                strcpy(stu[j-1].mail,stu[j].mail);
                strcpy(stu[j].mail,temp);
        
		  }
	 }
}
void welcome()  //欢迎界面
{ 
    printf("\n\n\n\n");
    printf(" \t\t\t---------★西安邮电大学★---------\n\n\n\n\n");
	printf("\t\t\t\t 尊敬的用户:您好!\n\n\n");
    printf("\t\t\t\t    欢迎使用\n\n\n");
    printf("\t\t      -------☆自行车存放管理系统☆-------\n\n");
	printf("\n");
}
/*int mima()   //密码登录系统
{   
    int i;
	char a[7],b[]={"193018"};
    printf("\n\n\n\t\t            ====欢迎使用自行车存放管理系统====        \t\t\n");
    printf(" \n\t\t\t        提示：密码输入时不能删除!\n");	
	printf("\n\n\t\t\t        首先【请输入密码】******\n");
    printf("\n\n\t\t\t         您的密码为:");
    while(1)
	{ for(i=0;i<10;i++)
		{   a[i]=getchar();
			printf("*");
			if(a[i]=='\r')
			{	a[i]='\0';
				break;
			}
		}
	  if(strcmp(a,b)==0)   //比较两个字符串 
		{	printf("\n\n\n\n\t\t\t\t密码正确!\n\t\t\t\t继续按任意键进入系统!\n");
			getch();
            break;
		}
	  else
	       printf("\n密码错误，请重新输入！\n");
	}
      return 0;
}*/
void count()
{ 
    int i;
    int count = 0;
    char grade[10] = "大一";
    printf("\n总人数：%d\n", n);
    for (i = 0; i < n; i++)
    { 
        if (strcmp(stu[i].grade, grade) == 0)
        count++;
    }
    printf("\n\n大一：%d\n", count);
    printf("\n\n大二以上：%d\n", n - count);
}
void output()    //学生信息的显示
{ 
    int i;
    FILE *fp;
    if((fp=fopen("student.txt","rb"))==NULL)
    {   
        printf("\n打开文件时错误!\n请按任意键退出!");
        system("pause");
        return;
    }
    printf("所有学生的信息如下：\n \n");
    printf("======================================================================================================\n"); 
    printf("   学生学号   学生姓名  年级    学区   专业       车种       电话              E-mail      \n");
    printf("======================================================================================================\n");             
    for(i=0;i<n;i++)   
    {
        fread(&stu[i],sizeof(struct record),1,fp);
        printf("   %-8s   %-8s   %-6s   %-6s    %-6s    %-6s  %-12s     %-16s\n", stu[i].num,stu[i].name,stu[i].grade,stu[i].area,stu[i].major,stu[i].type,stu[i].tel,stu[i].mail);
    }
    printf("\n");
}
void modify()    //修改学生信息
{   
    int i;
	int t;
	int num;
    char sex1[10];
	char s1[30];
	char s2[30];
	printf("\n请输入要修改的学生的学号(8位)或姓名:\n");
    scanf("%s",s1);
    for(i=0;i<n;i++)
	{  
        if(!(strcmp(stu[i].num,s1) && strcmp(stu[i].name,s1)))
		{	num=i;
			break;
		}
	   else if (i == n - 1)
		{   printf("该信息不存在,请检查后重新输入!!!\n");
		
		}	
	}
		printf("                            1.修改学号                  \n");
        printf("                            2.修改姓名                  \n");
        printf("                            3.修改年级                  \n");
        printf("                            4.修改学区                  \n");
        printf("                            5.修改专业              \n");
        printf("                            6.修改车种                  \n");
        printf("                            7.修改电话号码              \n");
        printf("                            8.修改E-mail                \n");
        printf("                            0.退出本菜单                \n");
		while(1)
		  { printf("请输入子菜单的编号:");
            scanf("%d",&t);
			switch(t)
			{ case 1:printf("请输入新的学号:\n");
			         scanf("%s",s2);
				     strcpy(stu[num].num,s2);break;
			  case 2:printf("请输入新的姓名:\n");
			     	 scanf("%s",s2);
				     strcpy(stu[num].name,s2);break;
			  case 3:printf("请输入新的年级:\n");
				     scanf("%s",&stu[num].grade);break;
			  case 4:printf("请输入新的学区:\n");
                     scanf("%s",sex1);
                     strcpy(stu[num].area,sex1);break;
			  case 5:printf("请输入新的专业: \n");
				     scanf("%s",s2);
                     strcpy(stu[num].major,s2);break;
			  case 6:printf("请输入新的车种: \n");
                     scanf("%s",s2);
                     strcpy(stu[num].type,s2);break;
			  case 7:printf("请输入新的电话号码(11位): \n");
				     scanf("%s",s2);
                     strcpy(stu[num].tel,s2);break;
			  case 8:printf("请输入新的E-mail: \n");
				     scanf("%s",s2);
			         strcpy(stu[num].mail,s2);break;
			  case 0:printf("\n操作成功，退出后按8保存!\n");
			         return; 
				     getch();
			  default:printf("\n请在0--8之间选择\n");
			}
          }
		sort();
		save();
}
void quit()   //退出系统
{   
    printf("                             【自行车存放管理系统】\n");
	printf("                              ◆谢谢使用◆             \n");
}