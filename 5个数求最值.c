# include <stdio.h>
int main()
{
	int a[]={54,-87,65,78,2};
	int n,i,j,k;
	n=sizeof a/sizeof(a[0]);
	for(i=0;i<n-1;++i)
	{
		for(j=0;j<n-1-i;++j)
		{
			if(a[j]<a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k; 
			}
		}
	}
	for(i=0;i<n;++i)
	{
		printf("%d %d\n",a[4],a[0]);
	}
	return 0;
	
}
