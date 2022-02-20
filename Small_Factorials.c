#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,k,f;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f=1;
        for (k=a[i];k>0;k--)
        {
            f=f*k;
        }
        printf("%d
",f);
    }
}