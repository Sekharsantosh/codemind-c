#include<stdio.h>
int main()
{
    int n,r,m,s,p,a;
    scanf("%d",&n);
    s=n*n;
    m=0;
    while(s)
    {
        r=s%10;
        m=m+r;
        s=s/10;
    }
    a=m+s;
    if(n==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}