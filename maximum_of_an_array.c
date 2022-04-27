#include<stdio.h>
int main()
{
    int n,i,c,k=0,l;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=a[0];
    for(i=0;i<n;i++)
    {
            if(c<=a[i])
            {
                c=a[i];
            }
    }
    printf("%d",c);
}