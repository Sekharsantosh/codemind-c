#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    if (n==1)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
          return 0;
    }
    return 1;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    //printf("%d",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(is_prime(i))
            {
                c+=0;
            }
            else
            {
               //printf("%d",i);
               c=c+1;
            }
        }
    }
    printf("%d",c);
}