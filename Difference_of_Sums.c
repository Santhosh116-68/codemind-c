#include<stdio.h>
int main()
{
    int n,m,a;
    scanf("%d",&n);
    m=(n*(n+1)*((2*n)+1))/6;
    a=n*(n+1)/2;
    printf("%d",(a*a)-m);
}