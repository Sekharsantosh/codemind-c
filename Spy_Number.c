#include<stdio.h>
int main()
{
    int n,i,r,res,p;
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
    if(i==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
       
    }
}