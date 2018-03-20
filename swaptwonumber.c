#include<stdio.h>
void main()
{
int a,b,t;
scanf("%d\t%d\n",&a,&b);
t=a;
a=b;
b=t;
printf("%d\t%d\n",a,b);
}
