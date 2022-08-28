#include<stdio.h>
int fib(int n)
{
    int i,a[n],j,l=0;
    int f1=0,f2=1,f3=f1+f2;
    for(i=2;i<=n;i++)
    {
        while(f3<=n)
        {
            f1=f2;
            f2=f3;
            f3=f1+f2;
        }
        if(n==f1 or n==f2 or n==f3)
        {
            l=1;
            break;
        }
    }
    if (l==1)
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
    int n,p,i;
    scanf("%d",&n);
    if(fib(n))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}