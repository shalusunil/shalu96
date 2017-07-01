#include<stdio.h>
int main()
{
 int i=1,n,sum=0;
 printf("ENTER THE VALUE OF N:");
 scanf("%d",&n);
 while(i<=n)
 {
 printf("%7d",i);
 sum=sum+i;
 i++;
 }
 printf("\nSum=%d\n",sum);
 return 0;
 }
