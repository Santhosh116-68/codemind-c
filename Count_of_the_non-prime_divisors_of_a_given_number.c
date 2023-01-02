#include<stdio.h>
int np(int x)
{
    int i,c=0,b=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            c++;
        }
    }
    if(c>2)
    {
        b++;
    }
    return b;
}
int main()
{
    int a,h=0,i;
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            h=h + np(i);
        }
    }
    printf("%d",h+1);
}