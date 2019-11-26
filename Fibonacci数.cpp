# include <stdio.h>
int main()
{
	int m, n,i,j,k;
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d",&k);
		for(n=3,i=j=1;n<=k;n++)
		{
		 i=i+j,j=i-j;
		}
		 printf("%d",i);
	}
	return 0;
}
