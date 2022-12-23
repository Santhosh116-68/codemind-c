#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,p1,p2;
    float e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    p1=pow((c-a),2);
    p2=pow((d-b),2);
    e=sqrt(p1+p2);
    printf("%.4f",e);
}