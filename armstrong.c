#include<stdio.h>
int main()
{
int n,o,rem,res=0;
printf("Enter a three digit integer:");
scanf("%d",&n);
o=n;
while(o!=0)
{
rem=o%10;
res+=rem*rem*rem;
o/=10;
}
if(res==n)
printf("Armstrong Number",n);
else
printf("Not an Armstrong Number",n);
return 0;
}
