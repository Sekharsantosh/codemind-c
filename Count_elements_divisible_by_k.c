#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int a[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%k==0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}