#include <stdio.h>  //  1/3 �������   һ�����������м����� 
int main()
{
	int elevater1;int elevater2;  //��1�ų˿ͽ��ĵ��ݹ涨Ϊ2�ŵ��� 
	int a;int b;int c;  //�˿�1 
	int d;int e;int f;  //�˿�2 
	int g=f-c;
	int h=a-elevater1;int abs_h=abs(h);
	int i=a-d;int abs_i=abs(i);
	int k=abs_h-f+c;int j=abs_i-k;
	printf("����2�ŵ���¥�㣬1�ŵ���¥��\n");
	printf("��ʼλ�ã�Ŀ��λ�ã�ʱ��\n"); 
	
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
