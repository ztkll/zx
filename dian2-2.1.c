#include <stdio.h>  //  1/3 大道至简   一个电梯在人中间的情况 
int main()
{
	int elevater1;int elevater2;  //离1号乘客近的电梯规定为2号电梯 
	int a;int b;int c;  //乘客1 
	int d;int e;int f;  //乘客2 
	int g=f-c;
	int h=a-elevater1;int abs_h=abs(h);
	int i=a-d;int abs_i=abs(i);
	int k=abs_h-f+c;int j=abs_i-k;
	printf("输入2号电梯楼层，1号电梯楼层\n");
	printf("起始位置，目的位置，时刻\n"); 
	
	scanf("%d %d",&elevater1,&elevater2); 
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d %d",&d,&e,&f);
	
	if (abs_h<=g) {printf("%d %d %d\n",elevater1,a,b);printf("%d %d %d\n",elevater2,d,e);
	}
	else if (abs_h>g,k>=j) {printf("%d %d %d\n",elevater1,d,e);printf("%d %d %d\n",elevater2,a,b);
	}
	else if (abs_h>g,k<j) {printf("%d %d %d\n",elevater1,a,b);printf("%d %d %d\n",elevater2,d,e);
	}
}
