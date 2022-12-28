#include<stdio.h>
int main()
{
    int n,i,j,h;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-1-j;i++)
        {
            if(a[i]==1 && a[i+1]==0)
            {
                h=a[i];
                a[i]=a[i+1];
                a[i+1]=h;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}