#include<stdio.h>
int main()
{
    int n,d,r,rev=0,rd,m,p=0;
    scanf("%d",&n);
    d=n*n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    rd=rev*rev;
    while(rd>0)
    {
        m=rd%10;
       p=p*10+m;
       rd=rd/10;
    }
    if(d==p)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}