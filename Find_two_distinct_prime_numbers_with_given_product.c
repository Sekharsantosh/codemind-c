#include<stdio.h>
#include<math.h>
int is_pri(int n)
{
    int i,j;
    if(n==1)
    {
        return 0;
    }
    for(i=2;i<=pow(n,0.5);i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k=0,h=0,s=0;
    for(i=1;i<n/2;i++)
    {
      for(j=i+1;j<=n;j++)
      {
        if(is_pri(i) && is_pri(j) && i*j==n)
        {
                h=i;
                s=j;
                k=1;
                break;
        }
      }
    }
    if(k==1)
    {
        printf("%d ",h);
        printf("%d ",s);
    }
    else
    {
        printf("-1");
    }
}

