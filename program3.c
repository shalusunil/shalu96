#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
scanf("%d",&a);
if(a>0)
{
printf("Number is positive");
}
else if(a<0)
{
printf("Number is negative");
}
else
{
printf("Number is zero");
}
getch();
}
