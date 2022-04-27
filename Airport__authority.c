#include<stdio.h>
int main()
{
    int n,i,c,k=0,l;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;
    int m;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
         if(a[i]<=m)
         {
             c=c+1;
         }
         else
         {
             c=c+2;
         }
    }
    printf("%d",c);
}