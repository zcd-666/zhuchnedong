# include <stdio.h>
int main(void)
{
	int a,b,c,n,i;
	scanf("%d%d%d",&a,&b,&c);
	for(i=3;;i++)
	{
		if(i%3==a&&	i%5==b&&i%7==c)
		break;
	}
	if(i<10||i>100)
	   printf("No answer");
	else
	   printf("%d",i);
	   return 0;
	
}
