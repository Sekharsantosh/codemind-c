#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
   long long int a[n],b[n],c=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=c+a[i];
    }
    printf("%lld",c);
}