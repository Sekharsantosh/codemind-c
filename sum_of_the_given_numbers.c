#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n],i,j;
    for(i=0;i<n;i++)
    {
            scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d
",c[i]);
    }
}