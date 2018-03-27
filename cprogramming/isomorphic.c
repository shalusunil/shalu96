#include <stdio.h>
#include<string.h>
int main(void) {
	char arr[100],brr[100];
	scanf("%s %s",arr,brr);
	int s,n,i,j,u,v,w,x,y,z,flag=0;
	s=strlen(arr);
	n=strlen(brr);
	if(s==n)
	{
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			u=arr[i];
			v=arr[j];
			w=brr[i];
			x=brr[j];
			y=u-v;
			z=w-x;
			if(y==z)
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	}
	else
	{
		printf("no");
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
