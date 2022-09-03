#include<stdio.h>
#include<math.h>
int sum(int n)
{
    int r,k,l,s=0;
    int t;
    t=n;
    while(t)
    {
        r=t%10;
        s=s+r*r;
        t=t/10;
    }
    if(s<9)
    {
        return  s;
    }
    else
    {
        return sum(s);
    }
   
}
int main()
{
    int n;
    scanf("%d",&n);
    int l;
    if(sum(n)==(1 || 7))
    {
       printf("True");
    }
    else
    {
        printf("False");
    }
    
}