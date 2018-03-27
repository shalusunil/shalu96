#include <stdio.h>
int main(void)
{
	char arr[100];
	scanf("%s",arr);
	int i,u,v;
	u=arr[0];
	if(u>91)
	{
		v=u-32;
		arr[0]=v;	
	}
	for(i=1;arr[i]!='\0';i++)
	{
		if(arr[i]==' ')
		{
			u=arr[i+1];
			if(u>91)
			{
				v=u-32;
				arr[i+1]=v;
			}	
		}
	}
	printf("%s",arr);
	return 0;
