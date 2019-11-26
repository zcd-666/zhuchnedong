# include"stdio.h"
int main() {
	int i, b, c, d, j, k;
	scanf("%d",&i);
	for(d=0;d<i;d++){
		scanf("%d",&b);
		for(j=1;j<=b;j++){
			if(j%2==1)
			printf("%3d",j);
		}
		printf("\n");
	
		for(k=1;k<=b;k++){
			if(k%2==0)
			printf("%3d",k);
		}
		
	}
	return 0;
}
