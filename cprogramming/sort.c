#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	        temp=a[i];
	        a[i]=a[j];
	        a[j]=temp;
	        }
	}
	}
	for(i=0;i<n;i++)
	{
	    printf("\t%d",a[i]);
	}
	return 0;
}
