#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,i,m=0;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        m=m+sqrt(i);
    }
    printf("%.2f",m);
}