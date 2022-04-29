#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,l,d,k=0,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(j=0;j<n/2;j++)
      {
        s=s+a[j];
       
       }
    for(l=n/2;l<n;l++)
    {
    	k=k+a[l];
	}
    int m;
    m=k-s;
    printf("%d",m);
   
}