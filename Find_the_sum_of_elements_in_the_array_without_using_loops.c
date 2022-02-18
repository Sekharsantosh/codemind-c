#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,p=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        p=p+a[i];
    }
    printf("%d",p);
}