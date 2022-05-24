#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=n/2;
    for(j=n;j>k;j--)
    {
        printf("%d ",a[j]);
    }
    for(i=1;i<=k;i++)
    {
        printf("%d ",a[i]);
    }
}