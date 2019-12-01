# include <stdio.h>
int main()
{
	int n,sore;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&sore);
		if(90<=sore&&sore<=100) printf("A\n");
		if(80<=sore&&sore<=89) printf("B\n");
		if(70<=sore&&sore<=79) printf("C\n");
		if(60<=sore&&sore<=69) printf("D\n");
		if(0<=sore&&sore<=59) printf("E\n");
	}
	return 0;
}
