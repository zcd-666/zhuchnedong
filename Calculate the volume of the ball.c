#include<stdio.h>
int main()
{
    double r,pi=3.1415926;
    while(scanf("%lf",&r)==1)
    {
        printf("%.0lf\n",pi*r*r*r*4/3);
    }
    return 0;
}
