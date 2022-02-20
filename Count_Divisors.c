#include<stdio.h>
 int main()
{
    int m,n,k,i,count=0;
    scanf("%d%d%d",&m,&n,&k);
    for(i=m;i<=n;i++)
    {
        if(i%k==0)
        {
           count=count+1;
        }
    }
    printf("%d",count);
}
