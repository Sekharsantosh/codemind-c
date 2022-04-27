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
    int m;
    scanf("%d",&m);
    c=0;
    for(i=0;i<n;i++)
    {
          
        if(a[i]==m)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}