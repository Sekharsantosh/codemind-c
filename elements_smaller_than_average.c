#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,m,k,s=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        //printf("%d ",a[i]);
        s=s+a[i];
    }
    k=int(s/n);
    for(i=0;i<n;i++)
    {
        if(k>=a[i])
        {
            c=c+1;
        }
    }
    printf("%d",c);
}