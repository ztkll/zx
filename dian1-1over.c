#include <stdio.h>

int main()
{
int a;int b; int c;    
	 
	 scanf("%d %d %d",&a,&b,&c);
	       //a��ʾ�˵ȵ��ݵĳ�ʼ¥�㣬b��ʾ��������Ҫ����Ĳ�����c��ʾ ��������¥��
	       int n=a-c;     int m=b+c-a-a;
	printf("%d 0 0\n",c) ;
	printf("%d %d 1\n",a,n);
	printf("%d %d 0\n ",b,m);//������ȡ����ֵ  
	printf("������ȡ����ֵ"); //1-1over
}
