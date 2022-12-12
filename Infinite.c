#include<stdio.h>
int main()
{
    
    int a,i;
    for(i=1;i>0;i++)
    {
       scanf("%d",&a); 
       if(a==-1)
       {
       break;
       }
       else
       {
       printf("%d
",a*a);
       }
    }
}