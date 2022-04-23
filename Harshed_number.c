#include<stdio.h>
int main()
{
    int n,e,rev=0,r;
    scanf("%d",&n);
    e=n;
    while(e)
    {
        r=e%10;
        rev=rev+r;
        e=e/10;
    }
    if(n%rev==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}