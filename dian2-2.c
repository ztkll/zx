#include <stdio.h>      //  2/3  一个人不在两个电梯之间的情况     这是部分情况，其他情况在另一个程序 中 
int main()

{
	int elevater1;int elevater2;
	int a;int b;int c;
	int d;int e;int f;
	int g=a-elevater1;int abs_g=abs(g);
	int h=elevater2-a;int abs_h=abs(h);
	int i=f-c;
	int j=abs_h-f+c;
	int k=a-j;int l=d-j;int abs_k=abs(k);int abs_l=abs(l);int m=elevater2-d;int abs_m=abs(m);
	int n=abs_m-f+c;int abs_n=abs(n);
	int o=abs_g-f+c;	int p=elevater1-d;int abs_p=abs(p);int q=abs_p-f+c;int abs_q=abs(q);
	
	scanf("%d %d",&elevater1,&elevater2);//电梯 
	scanf("%d %d %d",&a,&b,&c);//乘客1 起点 终点 时刻 
	scanf("%d %d %d",&d,&e,&f);//乘客2 起点 终点 时刻 
	printf("先后输入1.2号电梯初始楼层");
	 
	if (abs_g>=abs_h,i>=abs_h) {printf("%d %d %d\n",elevater2,a,b);printf("%d %d %d\n",elevater1,d,e);
	}
	else if (abs_g>=abs_h,i<h,j<=abs_n) {printf("%d %d %d\n",elevater2,a,b);printf("%d %d %d\n",elevater1,d,e);
	}
	else if (abs_g>=abs_h,i<h,j>abs_n) {printf("%d %d %d\n",elevater2,d,e);printf("%d %d %d\n",elevater1,a,b);
	}
	else if (abs_g<abs_h,i>=abs_g) {printf("%d %d %d\n",elevater1,a,b);printf("%d %d %d\n",elevater2,d,e);
	}
	else if (abs_g<abs_h,i<abs_g,o<=abs_q) {printf("%d %d %d\n",elevater1,a,b);printf("%d %d %d\n",elevater2,d,e);
	}
	else if (abs_g<abs_h,i<abs_g,o>abs_q) {printf("%d %d %d\n",elevater1,d,e);printf("%d %d %d\n",elevater2,a,b);
	}
}
