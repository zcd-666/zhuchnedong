#include<stdio.h>
int main(void)
{
    int H,i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int day=1,h=0;
        scanf("%d",&H);
        while(h+10<H)
        {
            h+=5;
            day++;
        }
        printf("%d\n",day);
    }
    return 0;
}
        
