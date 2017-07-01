#include<stdio.h>
int main()
{
int b,e,c,res=1;
printf("Enter base and exponent \n");
scanf("%d%d",&b,&e);
for(c=0;c<e;c++)
{
res=res+b;
}
printf("%d^%d=%d",b,e,res);
return 0;
}
