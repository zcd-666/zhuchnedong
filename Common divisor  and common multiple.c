#include<stdio.h>
int main() {
	int i, j, c, n, k;
	scanf("%d", &n); 
	while (n--)
	{
		scanf("%d %d", &i, &j); 
		k = i * j;
		while (j != 0) {
			c = i % j;
			i = j;
			j = c;
		}
		printf("%d %d\n", i, k / i);
	}
	return 0;
}
