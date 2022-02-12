#include<stdio.h>
int main()
{
    int n,r,rev=0,p,e;
    scanf("%d",&n);
    e=n;
    while(e>0)
    {
        r=e%10;
       
       rev=rev+r;
       e=e/10;
        
    }
    if(n%rev==0)
        {
            printf("True");
            
        }
        else
        {
            printf("False");
        }
}