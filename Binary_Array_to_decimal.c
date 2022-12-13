#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,m=0,b;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b=n-1-i;
        b=a[i]*pow(2,b);
        m=m+b;
    }
    printf("%d",m);
}