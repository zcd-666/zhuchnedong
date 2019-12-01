# include <stdio.h>
# include <string.h>
int main()
{
	int n,i,len;
	char a[100];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",&a);
		len = strlen(a);
		for (i = 0; i < len; i++) {
			if (a[i] <= 'z' && a[i] >= 'a')
				a[i] = a[i] - 32;
			else
				a[i] = a[i] + 32;
		}
		printf("%s\n", a);
	}
	return 0;
}
 

