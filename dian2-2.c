#include <stdio.h>      //  2/3  һ���˲�����������֮������     ���ǲ�������������������һ������ �� 
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
	
	scanf("%d %d",&elevater1,&elevater2);//���� 
	scanf("%d %d %d",&a,&b,&c);//�˿�1 ��� �յ� ʱ�� 
	scanf("%d %d %d",&d,&e,&f);//�˿�2 ��� �յ� ʱ�� 
	printf("�Ⱥ�����1.2�ŵ��ݳ�ʼ¥��");
	 
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
