#include<stdio.h>
int main()
{
    int n,r,rev=0,e;
    scanf("%d",&n);
    e=n;
    while(e)
    {
        r=e%10;
        rev=rev*10+r;
        e=e/10;
    }
    if(rev==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}