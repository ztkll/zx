#include <stdio.h>
int main()
{
int a;int b;int c;int d;int e;int f;int g;
int h=b-a;int abs_h=abs(h);int i=g-d;int abs_i=abs(i);
int j=a+abs_i;int k=a-abs_i;
int l=b-j;int abs_l=abs(l) ;int m=j-e;int abs_m=abs(m);
int n=b-k;int abs_n=abs(n);int o=k-e;int abs_o=abs(o) ;

scanf("%d",&a);
scanf("%d %d %d",&b,&c,&d);
scanf("%d %d %d",&e,&f,&g);
if(abs_h<abs_i) {printf("%d-%d-%d-%d-%d\n",a,b,c,e,f);

}
else if (abs_h>=abs_i) {if(b>=a) {if(abs_l>=abs_m)  {printf("%d-%d-%d-%d-%d-%d\n",a,j,e,f,b,c);
}   else if(abs_l<abs_m)  {printf("%d-%d-%d-%d-%d-%d\n",a,j,b,c,e,f);
}}
else if(b<a)  {if(abs_n>=abs_o)  {printf("%d-%d-%d-%d-%d-%d\n",a,k,e,f,b,c);
}   else if(abs_n<abs_o)    {printf("%d-%d-%d-%d-%d-%d\n",a,k,b,c,e,f);
}
}	
}}
