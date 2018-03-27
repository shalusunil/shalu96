#include<stdio.h>
#include<string.h>

int main(void)
{	
	int t=0,n,m,i;
	char r[9];
	scanf("%s",r);
	m=strlen(r);
	for(i=0;i<m;i++)
	{
	switch (r[i])
      {
     case 'I':  
            r[i] = 1;
            break;
     case 'V': 
            r[i] = 5;
            break;
     case 'X': 
            r[i] = 10;
            break;
     case 'L': 
            r[i] = 50;
            break;
     case 'C':  
            r[i] = 100;
            break;
     case 'D': 
            r[i] =  500;
            break;
	 }
}
for(i=0;i<m;i=i+2)
{
		if(r[i]<r[i+1])
		{
			n=r[i+1]-r[i];
		}
		else
		{
			n=r[i+1]+r[i];
		}
		t=n+t;
}
printf("%d",t);
return 0;
}
