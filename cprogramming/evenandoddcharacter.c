#include <stdio.h>
int main(void) {
	char arr[10];
	int a,j,temp;
	scanf("%s",arr);
	for(a=0,j=1;arr[a]!='\0';a=a+2,j=j+2)
	{
		temp=arr[a];
		arr[a]=arr[j];
		arr[j]=temp;
	}
	printf("%s",arr);
	return 0;
}
