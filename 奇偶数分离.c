# include"stdio.h"
int main() {
	int a, b, c, d, e, f;
	scanf("%d",&a);
	for(d=0;d<a;d++){
		scanf("%d",&b);
		for(e=1;e<=b;e++){
			if(e%2==1)
			printf("%3d",e);
		}
		printf("\n");
	
		for(f=1;f<=b;f++){
			if(f%2==0)
			printf("%3d",f);
		}
		
	}
	return 0;
}
