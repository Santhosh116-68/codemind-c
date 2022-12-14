#include<stdio.h>
int main()
{
    int n,i,c=0;
    int m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=m+a[i];
    }
    m=m/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=m)
        c++;
    }
    printf("%d",c);
}