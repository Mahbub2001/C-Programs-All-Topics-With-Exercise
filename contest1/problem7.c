#include<math.h>
#include<stdio.h>
int main()
{
    int t,i;
    double l,w,r,area1, area2;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lf",&l);
            r=l/5;
            w=(l*6)/10;
            area1=acos(-1)*r*r;
            area2=(l*w)-area1;
            printf("%.2lf %.2lf\n",area1,area2);
        }
    }
    return 0;
}