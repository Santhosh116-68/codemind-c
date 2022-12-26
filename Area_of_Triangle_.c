#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float s,h;
    s=(a+b+c)/2;
    h=s*(s-a)*(s-b)*(s-c);

    printf("%.2f",sqrt(h));
}