#include<stdio.h>
int main()
{
    int n,i,x=0,y=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i-1]%2==0 && a[i+1]%2!=0)
        {
        x++;
        }
        if(a[i-1]%2!=0 && a[i+1]%2==0)
        {
        y++;
        }
    }
    printf("%d",x+y);
}