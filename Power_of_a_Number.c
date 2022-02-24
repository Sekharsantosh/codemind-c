#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,k,a,r;
    scanf("%d%d%d",&n,&m,&k);
    a=pow(n,m);
    r=a%k;
    printf("%d",r);
}