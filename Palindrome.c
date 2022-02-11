#include<stdio.h>
int main()
{
    int n,i,r,rev;
    scanf("%d",&n);
    rev=0;
    i=n;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==i)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}