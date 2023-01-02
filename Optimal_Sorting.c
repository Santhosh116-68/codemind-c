#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int max=a[0],min=a[0],c=0;
        for(i=0;i<n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
            if(min>a[i])
            {
                min=a[i];
                c++;
            }
        }
        if(c>0)
        {
           printf("%d
",max-min); 
        }
        else
        {
            printf("0");
        }
    }
}