#include<stdio.h>
int reverse(int n)
{
    int r,rev=0,t=0;
    t=n;
    while(t)
    {
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    if(n==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int t,d,f,s;
    t=n;
    while(1)
    {
        t=t+1;
        if(reverse(t))
        {
           d=t;
           break;
        }
    }
    s=n;
    while(1)
    {
        s=s-1;
        if(reverse(s))
        {
            f=s;
            break;
        }
    }
    if(d-n<n-f)
    {
        printf("%d",d);
    }
    else if(d-n>n-f)
    {
        printf("%d",f);
    }
    else
    {
        printf("%d %d",f,d);
    }
}
    