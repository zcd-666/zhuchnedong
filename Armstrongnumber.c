# include <stdio.h>
int main()
{
	int a, i,j,k,n;
	scanf("%d",&a);
	i=a/100%10;
	j=a/10%10;
	k=a%10;
	if(a==i*i*i+j*j*j+k*k*k)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	printf("\n");
	return 0;
}
