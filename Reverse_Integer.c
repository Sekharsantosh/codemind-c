#include<stdio.h>
int main()
{
    signed int n,rev=0,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",rev);
}