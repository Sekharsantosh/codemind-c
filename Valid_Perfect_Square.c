#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=sqrt(a[i]);
        if(k*k==a[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}