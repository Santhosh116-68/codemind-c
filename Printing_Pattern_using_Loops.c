#include<stdio.h>
int pt(int x,int y,int z)
{
    int b,c,p;
    b=z-1-x;
    c=z-1-y;
    if(x<=y && x<=b && x<=c)
    {
        p=x;
    }
    if(y<=x && y<=b && y<=c)
    {
        p=y;
    }
    if(c<=y && c<=b && c<=x)
    {
        p=c;
    }
    if(b<=y && b<=x && b<=c)
    {
        p=b;
    }
    return p;
}
int main()
{
    int a,h,i,j,r;
    scanf("%d",&a);
    h=2*a-1;
    for(i=0;i<h;i++)
    {
        for(j=0;j<h;j++)
        {
            r=pt(i,j,h);
            printf("%d ",a-r);
        }printf("
");
    }
}