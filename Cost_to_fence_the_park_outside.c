#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int a1,a2,a;
    w=w*2;
    a1=l*b;
    a2=((l+w)*(b+w));
    a=a2-a1;
    printf("%d",a*c);
}