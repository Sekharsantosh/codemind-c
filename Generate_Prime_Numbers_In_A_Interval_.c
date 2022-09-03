#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int i;
    if(n==1)
    {
        return 0;
    }
    for(i=2;i<=pow(n,0.5);i++)
    { 
        if(n%i==0)
        {
             return 0;
        }
    }
    return 1;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int i,k;
    for(i=n;i<=m;i++)
    {
        if(is_prime(i))
        {
            printf("%d
",i);
        }
    }
}