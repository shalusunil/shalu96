#include<stdio.h>
int main()
{
char ch;
printf("Enter a character:");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
printf("Character is an Alphabet",ch);
}
else
{
printf("Character is not an Alphabet",ch);
}
return 0;
}
