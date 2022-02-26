#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,oc=0,ec=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            ec=ec+1;
        }
        else if(a[i]%2!=0)
        {
            oc=oc+1;
        }
    }
    printf("%d ",ec);
    printf("%d",oc);
}