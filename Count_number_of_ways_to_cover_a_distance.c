#include<stdio.h>
int count(int n)
{
    int k;
    if (n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    else if (n>0)
    {
        return count(n-1)+count(n-2)+count(n-3);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",count(n));
}