#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],j,c=0;
    for(j=1;j<=n;j++)
    {
        scanf("%d",&a[j]);
    }
    for(j=1;j<=n;j++)
    {
        if(j%2==1 && a[j]%2==1)
        {
            c=1;
        }
    }
    if(c==1)
    {
       printf("False");
    }
    else
    {
         printf("True");
        
    }
}