#include<stdio.h>
int main()
{
    int n,max=0,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        if (r>max)
        {
            max=r;
        }
        n=n/10;
    }
    printf("%d",max);
}