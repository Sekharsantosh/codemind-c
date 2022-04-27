#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(i%2==0 && a[i]%2==0)
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