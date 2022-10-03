#include<stdio.h>
int max(int *a,int n)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(c<a[i])
        {
            c=a[i];
        }
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]+x>=max(a,n))
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}