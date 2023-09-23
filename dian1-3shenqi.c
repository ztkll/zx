#include <stdio.h>

int main()
{
	int a;int b;int c;int d;int e;int f=a-e;int g=c-e;int abs_f=abs(f);int abs_g=abs(g);
	printf("请输入两组起始楼层与目的楼层，并输入电梯所在楼层\n");
	scanf("%d %d",&a,&b);       
	//输入起始楼层和目的楼层
scanf("%d %d",&c,&d);
scanf("%d",&e);//elavator
printf("电梯运行顺序");
	if(abs_f>=abs_g)   {printf("%d-%d-%d-%d-%d",e,a,b,c,d);}
	

	
	else if(f<g)   {printf("%d-%d-%d-%d-%d\n",e,c,d,a,b);}
	printf("电梯中最多容纳4人，未能上电梯的人待此次电梯运作结束后再按电梯门按钮，输入起始楼层和目的楼层，电梯会重复之前的过程"); }
	
	
	
	

