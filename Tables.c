#include<stdio.h>
int main()
{
    int n,p,k,i;
    scanf("%d%d",&n,&p);
    for(i=1;i<=p;i++)
    {
        if (i%2!=0)
        {
          k=n*i;
          printf("%d x %d = %d
",n,i,k);
        }
    }
}