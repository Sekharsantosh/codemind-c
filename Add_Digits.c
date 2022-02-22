#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n)
    {
        a=n%10;
        b=n/10;
        n=a+b;
        if(n==1 || n<10)
        {
            printf("%d",n);
            break;
        }
    }
}