int main(void) 
{
	char s1[40];
	int i,count=0;
	scanf("%[^\n]s",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(!((s1[i]>='0' && s1[i]<='9')||(s1[i]>='a' && s1[i]<='z')))
		{
			count=count+1;
		}
	}
	printf("\n%d",count);
	return 0;
}
