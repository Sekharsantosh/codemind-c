#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int f=0,f1=1,f3;
    printf("%d %d ",f,f1);
    for(int i=2;i<n;i++)
    {
        f3=f+f1;
        f=f1;
        f1=f3;
        printf("%d ",f3);
    }
   
    
}