#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("A is Larger",a);
}
else if(b>c)
{
printf("B is Larger",b);
}
else
{
printf("C is Larger",c);
}
return 0;
}
