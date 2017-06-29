#include<iostream.h>
#include<conio.h>
void main()
{
int a;
clrscr();
cout<<"Enter a year:";
cin>>a;
if(a%4==0||a%100==0||a%400==0)
{
cout<<"Entered year is Leap Year...";
}
else
{
cout<<"Entered year is not an Leap Year...";
}
getch();
}
