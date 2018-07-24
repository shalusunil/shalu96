#include <stdio.h>
int main(void) 
{
    int n,i,j,f=1;
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
		if(n%j==0)
		{
			f=1;
			for(i=2;i<=j/2;i++)
			{
			if(j%i==0)
			{
			f=0;
			break;
			}
			}
	if(f==1)
	{
		printf("%d ",j);
	}
		}
	}
	return 0;
}
