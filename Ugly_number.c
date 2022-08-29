#include<stdio.h>
int ugly(int n)
{
    int t=n;
    while(t%2==0)
    {
        t=t/2;
    }
    if (t==1)
    {
      return 0;   
    }
    while(t%3==0)
    {
        t=t/3;
    }
    if(t==1)
    {
        return 0;
    }
    while(t%5==0)
    {
        t=t/5;
    }
    if(t==1)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(ugly(n))
    {  
        printf("Not Ugly Number");
    }
    else
    {
       printf("Ugly Number");
    }
}