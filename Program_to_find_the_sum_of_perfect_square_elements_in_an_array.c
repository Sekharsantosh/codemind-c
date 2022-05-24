#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k=0,s=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        k=sqrt(a[i]);
        if(k*k==a[i])
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}