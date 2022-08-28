#include<stdio.h>
#include<math.h>
int len(int n)
{
    int r,t;
    while(n)
    {
        r=n%10;
        t=t+1;
        n=n/10;
    }
    return t;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    long int k;
    int  s,d,t;
    k=pow(10,m);
    d=n%k;
    int h=len(n);
    //printf("%d",h);
    while(n>pow(10,m))
    {
        n=n/10;
    }
    s=n;
   
    //printf("%ld",k);
   // printf("  %d %d ",s,d);
    if (s<d)
    {
        s=d-s;
        printf("%d",s);
    }
    else
    {
        d=s-d;
        printf("%d",d);
    }
}