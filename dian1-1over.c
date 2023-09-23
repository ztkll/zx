#include <stdio.h>

int main()
{
int a;int b; int c;    
	 
	 scanf("%d %d %d",&a,&b,&c);
	       //a表示人等电梯的初始楼层，b表示人作电梯要到达的层数，c表示 电梯所在楼层
	       int n=a-c;     int m=b+c-a-a;
	printf("%d 0 0\n",c) ;
	printf("%d %d 1\n",a,n);
	printf("%d %d 0\n ",b,m);//运算结果取绝对值  
	printf("运算结果取绝对值"); //1-1over
}
