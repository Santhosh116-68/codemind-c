#include<stdio.h>
int main()
{
    int n,i,j,h;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        h=a[i];
        if(h>a[i])
        {
            h=a[i];
        }
    }
    int b;
    for(i=1;i<=h;i++)
    {
        int c=0;
       for(j=1;j<=n;j++)
       {
           if(a[j]%i==0)
           {
               c++;
           }
       }
       if(c==n)
       {
           b=i;
       }
    }
    printf("%d",b);
}