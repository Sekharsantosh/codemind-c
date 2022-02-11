#include<stdio.h>
int main()
{
    int i,r,n,res,p;
    scanf("%d",&n);
    i=0;
    p=1;
    while(n)
    {
        r=n%10;
        i=i+r;
        p=p*r;
        n=n/10;
    }
    res=p-i;
    printf("%d",res);
}