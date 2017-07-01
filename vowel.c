#include<stdio.h>
int main()
{
char c;
int islow,isup;
printf("Enter an alphabet:");
scanf("%c",&c);
islow=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
isup=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(islow||isup)
 printf("Character is Vowel",c);
else
 printf("Character is Consonant",c);
return 0;
}
