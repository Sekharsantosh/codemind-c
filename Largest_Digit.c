#include<stdio.h>
int main()
{
    int n,r,p=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
    
     if(r>p)
     {
      p=r;
        
     }
    }
        printf("%d",p);
}